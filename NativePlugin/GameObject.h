#pragma once

#include "Vector2D.h"
#include "PluginSettings.h"

class PLUGIN_API GameObject {
public:
	GameObject();

	int
	GetID() const;

	void
	SetID(int a_id);

	Vector2D
	GetPosition() const;

	void
	SetPosition(float a_x, float a_y);

private:
	int m_id;

	Vector2D m_position;
};
