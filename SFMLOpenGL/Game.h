#ifndef GAME_H
#define GAME_H

#include <string>
#include <sstream>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include "Player.h"
#include "NPC.h"

using namespace std;
using namespace sf;
using namespace glm;
class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();
private:
	RenderWindow window;
	Clock clock;
	Time time;
	bool animate = false;
	vec3 animation = vec3(0.0f);
	float rotation = 0.0f;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	Player m_player;

	NPC m_NPC;

	static const int RED = 0;
	static const int BLUE = 1;
	static const int GREEN = 2;

	// counter for how far player cube has moved in the z direction
	int moveCounter = 0;

	// boool for if player is moving
	bool firing{ false };
	float score = 0;
	float lives = 5;
	void drawCube(int t_index);
};

#endif  // ! GAME_H