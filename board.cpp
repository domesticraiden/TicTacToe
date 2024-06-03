#include "board.h"

#include <cstdlib>
#include <iostream>

Board::Board() : myInput() {
	gameOver = false;

	turn = 'X';

	int j{ 1 };
	for (int i = 0; i < 9; i++)
		pos[i] = '0' + j++;
}

bool Board::checkWin() {
	if (!gameOver)
		return 0;
	else
		return 1;
}

void Board::markBoard() {
	choice = myInput.useInput(choice);

	while (!myInput.checkType(choice))
	{
		myInput.clearInput();

		clearBoard();

		printBoard();

		choice = myInput.useInput(choice);
	}

	pos[choice - 1] = turn;

	turn = turnBoard();
}

int Board::turnBoard() {
	switch (turn) {
	case 'X':
		return 'O';
	case 'O':
		return 'X';
	}
}

void Board::clearBoard() {
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

	system(CLEAR);
}


void Board::printBoard() {
	clearBoard();

	std::cout << "Tic Tac Toe" << std::endl << std::endl;

	std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << std::endl;
}
