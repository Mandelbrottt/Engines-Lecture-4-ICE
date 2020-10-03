#pragma once

#include "Vector.h"
#include "PluginSettings.h"

class PLUGIN_API GameObject {
public:
	GameObject();

	int
	GetID() const;

	void
	SetID(int a_id);

	Vector3D
	GetPosition() const;

	void
	SetPosition(float a_x, float a_y, float a_z);

private:
	int m_id;

	Vector3D m_position;
};
