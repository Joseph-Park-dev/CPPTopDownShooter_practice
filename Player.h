#pragma once

#include "SDL.h"

struct FloatVector2
{
	float x;
	float y;
};

struct IntVector2
{
	int x;
	int y;
};

class Player
{
public:
	Player(IntVector2 t_initPos);
	void Spawn();
	void Move();

	void SetPlayerPosition(IntVector2 t_pos);
private:

private:
	IntVector2 m_playerPosition;
	FloatVector2 m_targetDir;

	int m_playerSpeed;
};