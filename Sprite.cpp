#include "Sprite.hpp"

namespace Graphics
{
	// Destructor
	Sprite::~Sprite()
	{

	}

	// Constructor
	Sprite::Sprite() :
		Body(sf::Vector2f(100.0f, 100.f))
		//Texture()
 	{
		(this->Body).setFillColor(sf::Color::Red);
	}

	// Actions
	void Sprite::Move(sf::Vector2f speed)
	{
		(this->Body).move(speed);
	}
}