#include "NPC.h"



NPC::NPC()
{
}

void NPC::changePosition(glm::vec3 t_changeInPosition, int t_npcIndex)
{
	positions[t_npcIndex] += t_changeInPosition;
}

void NPC::setPosition(glm::vec3 t_newPosition, int t_npcIndex)
{
	positions[t_npcIndex] = t_newPosition;
}

glm::vec3 NPC::getPosition(int t_npcIndex)
{
	return positions[t_npcIndex];
}

int NPC::getColourIndex(int t_npcIndex)
{
	return m_colourIndex[t_npcIndex];
}

void NPC::setColourIndex(int t_colourIndex, int t_npcIndex)
{
	m_colourIndex[t_npcIndex] = t_colourIndex;
}



