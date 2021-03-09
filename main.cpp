// C3 Pgm 10 2D-Array Tic-Tac-Toe
//I found no other way to somehow reset the board then to individually reset each letter to its position.

#include <iostream>
#include <string>
#include <sstream>
#include <array> 

using namespace std;

const int ROWS = 3;
const int COLUMNS = 3;
char board[ROWS][COLUMNS] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };

//Default player is X
int rows;
int columns;
char player = 'X';
char playAgain = 'Y';
string name1;
string name2;
char letter;

//Initially, I was going to use a point system to calculate the winner, but I had difficulty figuring out how to do so. This is why I decided to use this function, so that the calculations could be assigned a variable, making it easier for me to insert it into the actual program -- int main().
char winner()
{
	//Player X
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 'X';
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 'X';

	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 'X';
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 'X';

	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		return 'X';

	//Player O
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 'O';
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 'O';

	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 'O';
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 'O';

	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		return 'O';

	return '-';
}
int main()
{
	cout << "* * * * * Tic Tac Toe * * * * *" << endl;
	cout << "\nName of Player X: ";
	cin >> name1;
	cout << "\nName of Player O: ";
	cin >> name2;
	cout << "\nWelcome, " << name1 << " and " << name2 << "!";
	cout << "\n\nObjective: ";
	cout << "\n\t✦ The game is played on a 3 by 3 square grid.";
	cout << "\n\t✦ The first player to mark 3 in a row (up, down,\n\tacross, or diagonally) wins.";
	cout << "\n\t✦ Once all 9 squares are full, the game ends.";
	cout << "\n\nLet's begin the game, " << name1 << " and " << name2 << "!";

	while ((playAgain == 'Y') || (playAgain == 'y'))
	{
		cout << "\n\n";
		//Display board here
		for (int row = 0; row < ROWS; ++row)
		{
			for (int col = 0; col < COLUMNS; ++col)
			{
				cout << board[row][col] << " ";
			}
			cout << endl;
		}
		cout << "\nEnter any letter from the board: ";
		cin >> letter;
		cout << ". . . . . . . . . . . . . . . . . .";

		if (letter == 'a')
			board[0][0] = player;
		else if (letter == 'b')
			board[0][1] = player;
		else if (letter == 'c')
			board[0][2] = player;
		else if (letter == 'd')
			board[1][0] = player;
		else if (letter == 'e')
			board[1][1] = player;
		else if (letter == 'f')
			board[1][2] = player;
		else if (letter == 'g')
			board[2][0] = player;
		else if (letter == 'h')
			board[2][1] = player;
		else if (letter == 'i')
			board[2][2] = player;
	
		if (winner() == 'X')
		{
			cout << "\n\n\t" << name1 << " wins!\n" << endl;
			//Display board here
			for (int row = 0; row < ROWS; ++row)
			{
				for (int col = 0; col < COLUMNS; ++col)
				{
					cout << board[row][col] << " ";
				}
				cout << endl;
			}
			cout << "\n\nWould you like to play again (Y/N)? ";
			cin >> playAgain;
			cout << ". . . . . . . . . . . . . . . . . .";
			board[0][0] = 'a';
			board[0][1] = 'b';
			board[0][2] = 'c';
			board[1][0] = 'd';
			board[1][1] = 'e';
			board[1][2] = 'f';
			board[2][0] = 'g';
			board[2][1] = 'h';
			board[2][2] = 'i';
		}
		else if (winner() == 'O')
		{
			cout << "\n\n\t" << name2 << " wins!\n" << endl;
			//Display board here
			for (int row = 0; row < ROWS; ++row)
			{
				for (int col = 0; col < COLUMNS; ++col)
				{
					cout << board[row][col] << " ";
				}
				cout << endl;
			}
			cout << "\n\nWould you like to play again (Y/N)? ";
			cin >> playAgain;
			cout << ". . . . . . . . . . . . . . . . . .";
			board[0][0] = 'a';
			board[0][1] = 'b';
			board[0][2] = 'c';
			board[1][0] = 'd';
			board[1][1] = 'e';
			board[1][2] = 'f';
			board[2][0] = 'g';
			board[2][1] = 'h';
			board[2][2] = 'i';
		}
		if (player == 'X')
		{
			player = 'O';
		}
		else
		{
			player = 'X';
		}
	}
cout << "\n\nThanks for playing!";
return 0;
}