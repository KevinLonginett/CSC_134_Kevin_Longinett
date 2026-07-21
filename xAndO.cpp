/*
@author: Kevin Longinett
@date: 7/20/26
@purpose: This program allows two players to play Tic-Tac-Toe. The game uses a 3x3 array, checks for wins, detects draws, and prevents players from selecting an occupied space.
*/

// Include the input/output library for this program
#include <iostream>
#include <limits>
using namespace std;

// 3x3 array to store the board
char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

// Show the current board
void printBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---+---+---\n";
    }
    cout << "\n";
}

// Check if a player has won
bool checkWin(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
    return false;
}

// Check if the board is full
bool checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
    return true;
}

// Place a move on the board
bool makeMove(int choice, char player) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (choice < 1 || choice > 9) return false;
    if (board[row][col] == 'X' || board[row][col] == 'O') return false;

    board[row][col] = player;
    return true;
}

int main() {
    char player = 'X';
    int choice;

    cout << "TIC TAC TOE\n";

    while (true) {
        printBoard();
        cout << "Player " << player << ", choose 1-9: ";

        // Make sure the user enters a number
        while (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter a number from 1 to 9: ";
        }

        // Try the move and repeat if it is invalid
        if (!makeMove(choice, player)) {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        // Check for win or draw
        if (checkWin(player)) {
            printBoard();
            cout << "Player " << player << " wins!\n";
            break;
        }
        if (checkDraw()) {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }

        // Switch players
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
