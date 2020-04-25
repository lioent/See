#include "Game.hpp"
#include "GameConfiguration.hpp"

#include "Player.hpp"

int main()
{
	// Initialization of a Singleton class
	Program::Game* game = nullptr;
	game = game->GetInstance();

	return 0;
}