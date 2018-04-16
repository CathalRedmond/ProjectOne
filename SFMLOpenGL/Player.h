#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Player
{
public:
	Player();
	void changePosition(glm::vec3 t_changeInPosition);
	void setPosition(glm::vec3 t_newPosition);
	glm::vec3 getPosition();

	int getColourIndex();
	void setColourIndex(int t_colourIndex);
private:
	glm::vec3 position;

	int playerColourIndex = 0;
};

