#include "GameConfiguration.hpp"

namespace Program
{
	// Destructor
	GameConfiguration::~GameConfiguration()
	{
		delete (this->VideoMode);
	}

	// Constructor
	GameConfiguration::GameConfiguration(sf::VideoMode* videoMode, string title, unsigned int style)
	{
		if (videoMode == nullptr)
		{
			videoMode = new sf::VideoMode(800, 600);
		}
		this->VideoMode = videoMode;
		this->Title = title;
		this->Style = style;
	}
}
