#pragma once

#include "Avatar.hpp"
using std::string;

namespace Entities
{
	// Represents the player/user of the game
	class Player
	{
#pragma region Attributes
	private:
		Entities::Avatar* Avatar;
		string Name;
		int Score;
		unsigned int Tries;

#pragma endregion 

#pragma region Methods
	public:
		~Player();
		Player(Entities::Avatar* avatar = new Entities::Avatar, string name = "", int score = 0, unsigned int tries = 3);

		// GETs/SETs
		Entities::Avatar* GetAvatar() const { return this->Avatar; }
		void SetAvatar(Entities::Avatar* avatar) { this->Avatar = avatar; }

		string GetName() const { return this->Name; }
		void SetName(const string name) { this->Name = name; }

		int GetScore() const { return this->Score; }
		void SetScore(const int score) { this->Score = score; }

		unsigned int GetTries() const { return this->Tries; }
		void SetTries(const unsigned int tries) { this->Tries = tries; }

		// Actions
		void Pause();
#pragma endregion
	};
}

