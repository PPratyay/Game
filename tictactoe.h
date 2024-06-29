#include <iostream>
#include <vector>

using namespace std;

void tictactoe()
{
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'O';
    string charmove;
    int move, flag = 0;

    while (true)
    {
        printBoard(board, "User");

        cout << "Player " << currentPlayer << ",\nEnter your move (1-9): ";
        getline(cin, charmove);

        move = ValidateMove(board, charmove);

        if (move == -1 && flag == 1)
        {
            cout << "Invalid Move. Please Enter Valid Move" << endl;
            getch();
            continue;
        }
        else if (flag == 1)
        {
            int row, col;
            convertMove(move, row, col);
            board[row][col] = currentPlayer;
        }

        if (checkWin(board, currentPlayer))
        {
            printBoard(board, "User");
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        if (isBoardFull(board))
        {
            printBoard(board, "User");
            cout << "It's a tie!" << endl;
            cout << "Press any Key to Continue...";
            getch();
            system("cls");
            break;
        }

        if (flag == 1)
        {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        flag = 1;
    }
}

// int main()
// {
//     cout << "Welcome to Tic Tac Toe!" << endl;
//     tictactoe();
//     return 0;
// }