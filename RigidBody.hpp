#pragma once

#include <SFML/Graphics.hpp>

#include "Sprite.hpp"

// Contains all Physics subjects and handlers
namespace Physics
{
	class RigidBody
	{
#pragma region Attributes
	private:
		Graphics::Sprite* Sprite;
		sf::Vector2f Size;
		sf::Vector2f Position;
		sf::Vector2f Origin;
		sf::Vector2f Speed;
		float Mass;
#pragma endregion

#pragma region Methods
	public:
		~RigidBody();
		RigidBody(Graphics::Sprite* sprite = new Graphics::Sprite());

		// GETs/SETs
		Graphics::Sprite* GetSprite() const { return this->Sprite; }
		void SetSprite(Graphics::Sprite* sprite) { this->Sprite = sprite; }

		sf::Vector2f GetSize() const { return this->Size; }
		void SetSize(sf::Vector2f size) { this->Size = size; }

		sf::Vector2f GetPosition() const { return this->Position; }
		void SetPosition(sf::Vector2f position) { this->Position = position; }

		sf::Vector2f GetOrigin() const { return this->Origin; }
		void SetOrigin(sf::Vector2f origin) { this->Origin = origin; }

		sf::Vector2f GetSpeed() const { return this->Speed; }
		void SetSpeed(sf::Vector2f speed) { this->Speed = speed; }

		float GetMass() const { return this->Mass; }
		void SetMass(const float mass) { this->Mass = mass; }

		// Actions
		void Move();
#pragma endregion

	};
}

