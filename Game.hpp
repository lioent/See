#pragma once

#include <SFML/Graphics.hpp>

#include "GameConfiguration.hpp"

namespace Program
{
	// Find more about Singleton design pattern implementation at https://sourcemaking.com/design_patterns/singleton/cpp/1

	// Represents the program itself.
	// As it represents the program as a whole, it is a unique class and can't be instantiated twice.
	class Game
	{
#pragma region Attributes
	private:
		static Game* Instance;

		// IMPROVEMENT: Move all the graphic management to a "GraphicHandler" class
		sf::RenderWindow* RenderWindow;
		Program::GameConfiguration* Configuration;
#pragma endregion

#pragma region Methods
	private:
		Game();

	public:
		~Game();
		Game* GetInstance();

		virtual void Configure();
		virtual void Start();
		virtual void Run();
#pragma endregion
	};
}