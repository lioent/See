#include "RigidBody.hpp"


namespace Physics
{
	// Destructor
	RigidBody::~RigidBody()
	{
		delete (this->Sprite);
	}

	// Constructor
	RigidBody::RigidBody(Graphics::Sprite* sprite) :
		Size(0.0f, 0.0f),
		Position(0.0f, 0.0f),
		Origin(0.0f, 0.0f),
		Speed(0.0f, 0.0f)
	{
		this->Sprite = sprite;
		this->Mass = 0.0f;
	}

	// Actions
	void RigidBody::Move()
	{
		(this->Sprite)->Move(this->Speed);
	}

}