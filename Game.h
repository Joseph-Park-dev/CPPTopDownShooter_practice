#pragma once

#include "SDL.h"
#include "Player.h"
#include <string>

struct RectSize
{
	int x;
	int y;
};

class Game
{
public:
	Game();

public:
	bool Initialize();
	void RunLoop();
	void Terminate();

private:
	void ProcessInput();
	void Update();
	void GenerateOutput();
private:
	SDL_Window* mWindow;
	SDL_Renderer* mRenderer;
	RectSize mWindowSize;
	RectSize mWindowPos;
	const char* mTitle;
	bool mIsRunning;

	Player* mPlayer;
};