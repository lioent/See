#include "Game.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include "Player.hpp"

namespace Program
{
	Game* Game::Instance = nullptr;

	// Destructor
	Game::~Game()
	{
		delete (this->Window);
		delete (this->Configuration);

		// Self destruction
		delete (this->Instance);
	}

	// Constructor
	Game::Game()
	{
		this->Window = nullptr;

		this->Configure();
		this->Start();
	}


	// Gets the unique instance of the class
	Game* Game::GetInstance()
	{
		if (this->Instance == nullptr)
		{
			this->Instance = new Game();
		}

		return this->Instance;
	}


	// Configures the game by setting its Configuration attribute
	void Game::Configure()
	{
		this->Configuration = new Program::GameConfiguration();
	}

	// Initializes the game
	void Game::Start()
	{
		this->Window = new sf::RenderWindow(
			*(this->Configuration->GetVideoMode()),
			this->Configuration->GetTitle(),
			this->Configuration->GetStyle()
		);

		this->Run();
	}

	// Runs the game
	void Game::Run()
	{
		// Temporary variable to test the Player
		player_one = new Entities::Player();

		sf::Clock clock;	// Calculates past time
		sf::Time elapsed;	// Gets the elapsed time from last loop

		(this->Window)->setFramerateLimit(480);

		// The game runs inside this while loop
		while ((this->Window)->isOpen())
		{
			sf::Event event;
			while ((this->Window)->pollEvent(event))	// Gets the application's events 
			{
				switch (event.type)
				{
				case sf::Event::EventType::Closed:
					(this->Window)->close();
					break;

				default:
					break;
				}
			}

			(this->Window)->clear(sf::Color::Color(150, 150, 150, 1));
			(this->Window)->draw(*(player_one->GetAvatar()->GetBody()->GetSprite()->GetBody()));
			(this->Window)->display();

			player_one->GetAvatar()->Update();


			// The "restart" method also returns the elapsed time
			// elapsed = clock.restart();
		}

		delete (player_one);
	}
}