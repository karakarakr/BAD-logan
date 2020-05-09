#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;

int main()
{

    // Doesn't work: setlocale(LC_ALL, "Russian");
    cout << " ____     ______  ____        __       _____   ____    ______  __  __     \n/\\  _`\\  /\\  _  \\/\\  _`\\     /\\ \\     /\\  __`\\/\\  _`\\ /\\  _  \\/\\ \\/\\ \\    \n\\ \\ \\L\\ \\\\ \\ \\L\\ \\ \\ \\/\\ \\   \\ \\ \\    \\ \\ \\/\\ \\ \\ \\L\\_\\ \\ \\L\\ \\ \\ `\\\\ \\   \n \\ \\  _ <'\\ \\  __ \\ \\ \\ \\ \\   \\ \\ \\  __\\ \\ \\ \\ \\ \\ \\L_L\\ \\  __ \\ \\ , ` \\  \n  \\ \\ \\L\\ \\\\ \\ \\/\\ \\ \\ \\_\\ \\   \\ \\ \\L\\ \\\\ \\ \\_\\ \\ \\ \\/, \\ \\ \\/\\ \\ \\ \\`\\ \\ \n   \\ \\____/ \\ \\_\\ \\_\\ \\____/    \\ \\____/ \\ \\_____\\ \\____/\\ \\_\\ \\_\\ \\_\\ \\_\\ \n    \\/___/   \\/_/\\/_/\\/___/      \\/___/   \\/_____/\\/___/  \\/_/\\/_/\\/_/\\/_/\n";
    string s;
    cout << "Enter a spam-word: ";
    getline(cin, s);
    DWORD COUNT;
    cout << "Enter a interval( in milliseconds ): ";
    cin >> COUNT;
    cout << "Okay, 1 ";
    Sleep(1000);
    cout << "2 ";
    Sleep(1000);
    cout << "3! ";
    Sleep(1000);
    cout << "Let's go!\nClose window to stop spamming!";
    while (true) {
        for (int i = 0; i <= s.size(); i++)
            keybd_event(s[i], 0, 0, 0);
        keybd_event(VK_RETURN, 0, 0, 0);
        Sleep(COUNT);
    }
}