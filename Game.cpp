#include "Game.hpp"


namespace Program
{
	Game* Game::Instance = nullptr;

	// Destructor
	Game::~Game()
	{
		delete (this->RenderWindow);

		// Self destruction
		delete (this->Instance);
	}

	// Constructor
	Game::Game()
	{
		this->RenderWindow = nullptr;

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
		this->RenderWindow = new sf::RenderWindow(
			*(this->Configuration->GetVideoMode()),
			this->Configuration->GetTitle(),
			this->Configuration->GetStyle()
		);

		this->Run();
	}

	// Runs the game
	void Game::Run()
	{
		sf::CircleShape shape(100.f);
		shape.setFillColor(sf::Color::Green);

		while (this->RenderWindow->isOpen())
		{
			sf::Event event;
			while (this->RenderWindow->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					this->RenderWindow->close();
			}

			this->RenderWindow->clear();
			this->RenderWindow->draw(shape);
			this->RenderWindow->display();
		}
	}
}