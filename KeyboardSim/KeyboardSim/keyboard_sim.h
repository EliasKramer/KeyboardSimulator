#pragma once
#include <windows.h>
#include "key_map.h"
//checks if key is currently down
bool is_key_down(int key);
//presses a key
void press_key_short(int key);
//holds a key pressed
void press_key(int key);
//releases a key, that is hold
void release_key(int key);