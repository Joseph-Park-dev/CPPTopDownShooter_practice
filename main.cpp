/*
Game Programming practice
Top-down 2D Combat game with CPP, SDL2

Note :
The purpose of this game is to learn programming
and get familiar with opensource game project.
Please feel free to add and C&Cs are welcomed anytime.
Cheers.
*/

#include "Game.h"

int main(int argc, char* argv[])
{
	Game game;
	bool success = game.Initialize();

	if (success)
	{
		game.RunLoop();
	}
	game.Terminate();			

	return 0;
}