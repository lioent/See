#include "Character.hpp"

namespace Entities
{
	// Constructor
	Character::Character(int health, int jumps, int power) :
		Body()
	{
		this->Health = health;
		this->Jumps = jumps;
		this->Power = power;
		this->Attacking = false;
	}

	Character::Character(Physics::RigidBody body, int health, int jumps, int power)
	{
		this->Body = body;
		this->Health = health;
		this->Jumps = jumps;
		this->Power = power;
		this->Attacking = false;
	}

	// Actions
	void Character::Move()
	{
		(this->Body).Move();
	}
}