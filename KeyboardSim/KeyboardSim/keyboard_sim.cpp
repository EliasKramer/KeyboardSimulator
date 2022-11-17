#include "keyboard_sim.h"
bool is_key_down(int key)
{
	BYTE keyState[256];
	GetKeyboardState((LPBYTE)&keyState);
	
	return (keyState[key] & 1);
}

void press_key_short(int key)
{
}

void press_key(int key)
{
}

void release_key(int key)
{
}
