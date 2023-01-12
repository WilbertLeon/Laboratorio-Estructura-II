#include <windows.h>  
#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main() {
    system("mode con: cols=81 lines=25");

    cout << char(201);

    for (int i = 1; i < 80; i++)
    {
        gotoxy(i, 0);
        cout << char(205);
        Sleep(1);
    }

    cout << char(187);

    for (int i = 1; i < 24; i++)
    {
        gotoxy(80, i);
        cout << char(186) << endl;
        Sleep(1);
    }
    gotoxy(80, 24);
    cout << char(188);

    for (int i = 79; i > 0; i--)
    {
        gotoxy(i, 24);
        cout << char(205);
        Sleep(1);
    }

    gotoxy(0, 24);
    cout << char(200);

    for (int i = 23; i > 0; i--)
    {
        gotoxy(0, i);
        cout << char(186);
        Sleep(1);
    }

    gotoxy(23, 12);
    cout << "ESTRUCTURA DE DATOS Y ALGORITMOS II" << endl;
    system("pause");
    return 0;
}