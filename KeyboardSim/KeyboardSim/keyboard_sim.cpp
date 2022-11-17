#include "keyboard_sim.h"
bool is_key_down(int key)
{
	return GetKeyState(key) & 0x8000;
}

void press_key_short(int key)
{
    press_key(key);
	//Sleep(50);
	release_key(key);
}

void press_key(int key)
{
    // Simulate a key press
    keybd_event(key,
        0x45,
        KEYEVENTF_EXTENDEDKEY | 0,
        0);


}

void release_key(int key)
{
    // Simulate a key release
    keybd_event(key,
        0x45,
        KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
        0);
}
