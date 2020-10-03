#include "GameObject.h"

GameObject::GameObject() {
	SetID(0);
	SetPosition(0.0f, 0.0f, 0.0f);
}

int
GameObject::GetID() const {
	return m_id;
}

void
GameObject::SetID(int a_id) {
	m_id = a_id;
}

Vector3D
GameObject::GetPosition() const {
	return m_position;
}

void
GameObject::SetPosition(float a_x, float a_y, float a_z) {
	m_position = { a_x, a_y, a_z };
}
