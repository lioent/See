#pragma once

#include <SFML/Graphics.hpp>
using std::string;

namespace Program
{
	// Carries the attributes to configure the Game's configuration
	class GameConfiguration
	{
#pragma region Attributes
	private:
		sf::VideoMode* VideoMode;
		string Title;
		unsigned int Style;

#pragma endregion

#pragma region Methods
	public:
		~GameConfiguration();
		GameConfiguration(sf::VideoMode* videoMode = nullptr, string title = "", unsigned int style = sf::Style::Default);

		sf::VideoMode* GetVideoMode() const { return this->VideoMode; }
		string GetTitle() const { return this->Title; }
		unsigned int GetStyle() const { return this->Style; }
#pragma endregion
	};
}
