#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    cout << "Enter a spam-word: ";
    getline(cin, s);
    cout << "Okay, 1 ";
    Sleep(1000);
    cout << "2 ";
    Sleep(1000);
    cout << "3! ";
    Sleep(1000);
    cout << "Let's go!\nClose window to stop spamming!";
    while (true) {
        //MessageBox(0, L"Лалалал", L"Ололо", MB_OKCANCEL);
        for (int i = 0; i <= s.size(); i++)
            keybd_event(s[i], 0, 0, 0);
        keybd_event(VK_RETURN, 0, 0, 0);
        Sleep(1000);
    }
}