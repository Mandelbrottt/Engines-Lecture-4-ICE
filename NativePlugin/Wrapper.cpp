#include "Wrapper.h"
#include "GameObject.h"

static GameObject g_gameObject;

PLUGIN_API
int
GetID() {
	return g_gameObject.GetID();
}

PLUGIN_API
void
SetID(
	int a_id
) {
	g_gameObject.SetID(a_id);
}

PLUGIN_API
Vector2D
GetPosition() {
	return g_gameObject.GetPosition();
}

PLUGIN_API
void
SetPosition(
	float a_x, 
	float a_y
) {
	g_gameObject.SetPosition(a_x, a_y);
}
