#pragma once
class PlayingBoard
{
private:
	//This sets the the size of the playing board.
	//The way the size of the playing board is set is because this is a 3d array.
	//here the 3d array is being used to make a 3x3 playing board.
	char board[3][3];

public:
	//This Function Draws the playingboard by using an array the size of this array is 9;
	//since the size of this array is 9 the size of the playing board will be 3x3.
	void DrawBoard();

	//This function is used when ever no winner was found during a game.
	//so basiclly this function creates a new playing board when there are no avavilble place for a new token to be placed.
	void PrintBoard();

	//this function caculates all the possible moves can make in diferent situations during a game
	void GetMove(int move);

	//this function should give another player the chance to place their playing token.
	//This function should also cycle through player turns.
	void ChangePlayer(char player);

	//this bool determines if the owner of token X/O gets to place their token on the playing board first.
	bool TurnOrder();
};