#include "TicTacToe.h"
#include<iostream>
using namespace std;
void PlayingBoard::DrawBoard()
{
	char board[3][3] =
	{
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'},
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << "";
		}
		cout << endl;
	}
}

void PlayingBoard::PrintBoard()
{
}

void PlayingBoard::GetMove(int move)
{
	char player = 'X';
	cout << "\nEnter were you would like to place your playing token:\n";
	cin >> move;

	if (move == 1)
	{
		board[0][0] = player;
	}
	else if (move == 2)
	{
		board[0][1] = player;
	}
	else if (move == 3)
	{
		board[0][2] = player;
	}
	else if (move == 4)
	{
		board[1][0] = player;
	}
	else if (move == 5)
	{
		board[1][1] = player;
	}
	else if (move == 6)
	{
		board[1][2] = player;
	}
	else if (move == 7)
	{
		board[2][0] = player;
	}
	else if (move == 8)
	{
		board[2][1] = player;
	}
	else if (move == 9)
	{
		board[2][2] = player;
	}
}

void PlayingBoard::ChangePlayer(char player)
{
	if (player == 'X')
		player = 'O';
	else if (player == 'O')
		player = 'X';
}


bool PlayingBoard::TurnOrder()
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			if (board[i][j] == 'X' && board[i][j] == 'O')
				return true;
			else
				return false;
		}
	}
	return false;
}
