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

bool Board::checkCollision() {
	if (pos[choice - 1] == 'X' or pos[choice - 1] == 'O')
		return 1;
	else
		return 0;
}

bool Board::checkWin() {
	for (int i = 0; i < 9; i += 3)
		if (pos[i] == pos[i + 1] and pos[i + 1] == pos[i + 2])
			return 1;

	for (int i = 0; i < 3; i++)
		if (pos[i] == pos[i + 3] and pos[i + 3] == pos[i + 6])
			return 1;

	if (pos[0] == pos[4] and pos[4] == pos[8] or pos[2] == pos[4] and pos[4] == pos[6])
		return 1;

	return 0;
}

void Board::markBoard() {
	choice = myInput.useInput(choice);

	while (myInput.checkType(choice) or checkCollision())
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
