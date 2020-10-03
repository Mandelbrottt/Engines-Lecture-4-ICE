#pragma once

#include "PluginSettings.h"
#include "Vector2D.h"

#ifdef __cplusplus
extern "C" {
#endif

	extern PLUGIN_API
	int
	GetID();

	extern PLUGIN_API
	void
	SetID(
		int a_id
	);

	extern PLUGIN_API
	Vector2D
	GetPosition();

	extern PLUGIN_API
	void
	SetPosition(
		float a_x,
		float a_y
	);

#ifdef __cplusplus
}
#endif
