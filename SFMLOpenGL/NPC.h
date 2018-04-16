#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


class NPC
{
public:
	NPC();

	void changePosition(glm::vec3 t_changeInPosition, int t_npcIndex);
	void setPosition(glm::vec3 t_newPosition, int t_npcIndex);
	glm::vec3 getPosition(int t_npcIndex);

	int getColourIndex(int t_npcIndex);
	void setColourIndex(int t_colourIndex, int t_npcIndex);
private:
	static const int NUMBER_OF_NPCS = 3;
	glm::vec3 positions[NUMBER_OF_NPCS];

	int m_colourIndex[NUMBER_OF_NPCS];

};

