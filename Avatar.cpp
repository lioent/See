#include "Avatar.hpp"
#include <iostream>

namespace Entities
{
	// Constructor 
	Avatar::Avatar() :
		Character()
	{
		this;
	}

	// Actions
	void Avatar::Update()
	{
		this->UpdatePosition();
		this->UpdateAttack();
	}

	void Avatar::UpdatePosition()
	{
		this->MoveXAxis();
		this->MoveYAxis();
		this->Move();
	}

	void Avatar::UpdateAttack()
	{
		// to be implemented
	}

	void Avatar::MoveXAxis()
	{
		// to be implemented

		float acceleration = 0.01f;

		// Checks if any key to move horizontally is being pressed
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||
			sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			// Move left
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				// Checks if the body achieved maximum speed (3)
				if ((this->Body).GetSpeed().x > -3)
				{
					(this->Body).SetSpeed(sf::Vector2f((this->Body).GetSpeed().x - acceleration, (this->Body).GetSpeed().y));
				}
			}

			// Move right
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
				// Checks if the body achieved maximum speed (3)
				if ((this->Body).GetSpeed().x < 3)
				{
					(this->Body).SetSpeed(sf::Vector2f((this->Body).GetSpeed().x + acceleration, (this->Body).GetSpeed().y));
				}
			}
		}
		// Decrements the body's speed gradually
		else
		{
			if ((this->Body).GetSpeed().x > 0.1f || (this->Body).GetSpeed().x < -0.1f)
			{
				float speedX = (this->Body).GetSpeed().x;
				speedX += (speedX / (abs(speedX) * (-1))) / (1/acceleration);

				(this->Body).SetSpeed(sf::Vector2f(speedX, (this->Body).GetSpeed().y));
			}
			else
			{
				(this->Body).SetSpeed(sf::Vector2f(0.0f, (this->Body).GetSpeed().y));
			}
		}
		std::cout << this->Body.GetSpeed().x << std::endl;
	}

	void Avatar::MoveYAxis()
	{
		//// to be implemented

		float acceleration = 0.01f;

		// Checks if any key to move veritcally is being pressed
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) ||
			sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			// Move left
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				// Checks if the body achieved maximum speed (3)
				if ((this->Body).GetSpeed().y > -3)
				{
					(this->Body).SetSpeed(sf::Vector2f((this->Body).GetSpeed().x, (this->Body).GetSpeed().y - acceleration));
				}
			}

			// Move right
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				// Checks if the body achieved maximum speed (3)
				if ((this->Body).GetSpeed().y < 3)
				{
					(this->Body).SetSpeed(sf::Vector2f((this->Body).GetSpeed().x, (this->Body).GetSpeed().y + acceleration));
				}
			}
		}
		// Decrements the body's speed gradually
		else
		{
			if ((this->Body).GetSpeed().y > 0.1f || (this->Body).GetSpeed().y < -0.1f)
			{
				float speedY = (this->Body).GetSpeed().y;
				speedY += (speedY / (abs(speedY) * (-1))) / (1 / acceleration);

				(this->Body).SetSpeed(sf::Vector2f((this->Body).GetSpeed().x, speedY));
			}
			else
			{
				(this->Body).SetSpeed(sf::Vector2f((this->Body).GetSpeed().x, 0.0f));
			}
		}
	}

	void Avatar::Attack()
	{
		// to be implemented
	}
}