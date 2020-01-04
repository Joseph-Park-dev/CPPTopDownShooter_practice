#include "Player.h"

Player::Player(IntVector2 t_initPos)
	: m_targetDir({ 0,0 })
{
	m_playerPosition = t_initPos;
	m_playerSpeed = 5;
}