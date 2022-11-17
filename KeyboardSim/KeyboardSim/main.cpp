#include <iostream>
#include <Windows.h>
#include <winuser.h>
#include "easy_clipboard.h"
#include "keyboard_sim.h"
int main()
{
    /*
	std::string input;
	std::cout << "Please enter your move: \n";
	std::cin >> input;
    */
    while (true)
    {
        std::cout << (is_key_down(VK_KEY_1) ? "1 is down" : "1 is up") << std::endl;
		//wait for 1 second
		Sleep(1000);
    }
    /*
    static const int kExitOk = 0;
    static const int kExitError = 1;
	
    try
    {
        std::cout << GetClipboardText() << std::endl;
        return kExitOk;
    }
    catch (const std::exception& e)
    {
        std::cerr << "*** ERROR: " << e.what() << std::endl;
        return kExitError;
    }
    */
}
/*
void ShowDesktop()
{
    auto OutputString(L"Sending 'Win-D'\r\n");
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_LWIN;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_KEY_D;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = VK_KEY_D;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_LWIN;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    if (uSent != ARRAYSIZE(inputs))
    {
        OutputString(L"SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError()));
    }
}*/