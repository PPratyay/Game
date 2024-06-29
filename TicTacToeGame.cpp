#include <iostream>
#include <typeinfo>
#include <conio.h>
#include "supportlib.h"
#include "tictactoe.h"
#include "tictactoeai.h"

using namespace std;

void Menu()
{
    cout << "\nWelcome to Tic Tac Toe!" << endl;
    cout << "\t[1] Play against a Friend" << endl;
    cout << "\t[2] Play against the Computer" << endl;
    cout << "\t[0] Quit" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    int flag = 3;
    while (flag != 0)
    {
        Menu();
        cin >> flag;
        switch (flag)
        {
        case 1:
        {
            tictactoe();
            break;
        }
        case 2:
        {
            tictactoeai();
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        }
    }
}