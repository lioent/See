#pragma once

#include "Character.hpp"

namespace Entities
{
	class Avatar : public Character
	{
#pragma region Attributes

#pragma endregion

#pragma region Methods
	public:
		~Avatar() { }
		Avatar();

		void Update();

	private:
		void UpdatePosition();
		void UpdateAttack();

		void MoveXAxis();
		void MoveYAxis();

		void Attack();
#pragma endregion
	};
}

