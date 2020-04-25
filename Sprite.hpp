#pragma once

#include <SFML/Graphics.hpp>

// Contains all Graphical subjects and handlers
namespace Graphics
{
	// In-game graphical representation of a RigidBody
	class Sprite
	{
#pragma region Attributes
	private:
		sf::RectangleShape Body;
		//sf::Texture Texture;
#pragma endregion

#pragma region Methods
	public:
		~Sprite();
		Sprite();

		// GETs/SETs
		sf::RectangleShape* GetBody() {
			sf::RectangleShape* rect = &(this->Body);
			return &(this->Body); }
		void SetBody(sf::RectangleShape body) { this->Body = body; }

		//sf::Texture GetTexture() const { return this->Texture; }
		//void SetTexture(sf::Texture texture) { this->Texture = texture; }

		// Actions
		void Move(sf::Vector2f speed);
#pragma endregion
	};
}

