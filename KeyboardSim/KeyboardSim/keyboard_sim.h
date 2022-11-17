#pragma once
#include <windows.h>
#include "key_map.h"
bool is_key_down(int key);
void press_key_short(int key);
void press_key(int key);
void release_key(int key);