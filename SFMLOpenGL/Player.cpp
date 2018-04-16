#include "Player.h"



Player::Player()
{
}

void Player::changePosition(glm::vec3 t_changeInPosition)
{
	position += t_changeInPosition;
}

void Player::setPosition(glm::vec3 t_newPosition)
{
	position = t_newPosition;
}

glm::vec3 Player::getPosition()
{
	return position;
}

int Player::getColourIndex()
{
	return playerColourIndex;
}

void Player::setColourIndex(int t_colourIndex)
{
	playerColourIndex = t_colourIndex;
}



