#include "Player.hpp"

#include <iostream>
using std::cout;
using std::endl;

// Destructor
namespace Entities
{
	// Destructor
	Player::~Player()
	{
		delete (this->Avatar);
	}

	// Constructor
	Player::Player(Entities::Avatar* avatar, string name, int score, unsigned int tries)
	{
		this->Avatar = avatar;
		this->Name = name;
		this->Score = score;
		this->Tries = tries;
	}

	// Actions
	void Player::Pause()
	{
		// To be implemented
	}
}