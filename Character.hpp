#pragma once

#include "RigidBody.hpp"

namespace Entities
{
	class Character
	{
#pragma region Attributes
	protected:
		Physics::RigidBody Body;
		int Health;
		int Jumps;
		int Power;
		bool Attacking;
#pragma endregion

#pragma region Methods
	public:
		~Character() { }
		Character(int health = 1, int jumps = 1, int power = 1);
		Character(Physics::RigidBody body, int health = 1, int jumps = 1, int power = 1);

		// GETs/SETs
		Physics::RigidBody* GetBody() { return &(this->Body); }
		void SetBody(Physics::RigidBody body) { this->Body = body; }

		int GetHealth() const { return this->Health; }
		void SetHealth(const int health) { this->Health = health; }

		int GetJumps() const { return this->Jumps; }
		void SetJumps(const int jumps) { this->Jumps = jumps; }

		int GetPower() const { return this->Power; }
		void SetPower(const int power) { this->Power = power; }

		bool IsAttacking() { return this->Attacking; }

		// Actions
		void Move();
		virtual void Update() { /* empty implementation */ }

	protected:
		virtual void UpdatePosition() { /* emtpy implementation */ }
		virtual void UpdateAttack() { /* empty implementation */ }
		
		virtual void Attack() { /* empty implementation */ }
#pragma endregion
	};
}

