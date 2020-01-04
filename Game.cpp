#include "Game.h"

Game::Game()
	:mWindow(nullptr),
	mRenderer(nullptr),
	mTitle("CPPTopDownShooter_practice"),
	mIsRunning(true)
{
	mWindowSize = {700,500};
	mWindowPos = {300,100};

	Player* m_player = new Player({ mWindowSize.x / 2, mWindowSize.y / 2 });
}

bool Game::Initialize()
{
	int init = SDL_Init(SDL_INIT_VIDEO);
	if (init != 0)
	{
		SDL_Log("Error : Failed to initialize SDL");
		return false;
	}
	
	mWindow = SDL_CreateWindow(mTitle,
		mWindowPos.x,
		mWindowPos.y,
		mWindowSize.x,
		mWindowSize.y,
		0
	);
	if (!mWindow)
	{
		SDL_Log("Error : Failed to create window");
		return false;
	}
	return true;
}

void Game::RunLoop()
{
	while (mIsRunning)
	{
		ProcessInput();
		//Update();
		//GenerateOutput();
	}
}

void Game::ProcessInput()
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			mIsRunning = false;
			break;
		}
	}

	const Uint8* state = SDL_GetKeyboardState(NULL);
	if (state[SDL_SCANCODE_ESCAPE])
	{
		mIsRunning = false;
	}
	if (state[SDL_SCANCODE_W])
	{
		//mPlayer->Move();
	}
	
}

void Game::Update()
{

}

void Game::Terminate()
{
	SDL_DestroyWindow(mWindow);
	SDL_Quit();
}