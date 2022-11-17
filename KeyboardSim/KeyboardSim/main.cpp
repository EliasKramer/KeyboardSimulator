#include <iostream>
#include <Windows.h>
#include <winuser.h>
#include "easy_clipboard.h"
#include "keyboard_sim.h"
int main()
{

    std::string input;
    std::cout << "Please enter your move: \n";
    press_key_short(VK_KEY_5);
    press_key_short(VK_KEY_5);
    press_key(VK_CONTROL);
    press_key_short(VK_KEY_A);
    press_key_short(VK_KEY_C);
    press_key_short(VK_KEY_V);
    release_key(VK_CONTROL);
    press_key_short(VK_KEY_K);
    press_key_short(VK_KEY_K);
    press_key_short(VK_KEY_K);
    //press_key_short(VK_RETURN);
    std::cin >> input;
    std::cout << "You entered: " << input << std::endl;

    /*
    static const int kExitOk = 0;
    static const int kExitError = 1;
    while (true)
    {
        if (is_key_down(VK_KEY_0))
        {
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
        }
    }*/
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