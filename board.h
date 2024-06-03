#ifndef BOARD_H
#define BOARD_H

#include "input.h"


class Board {
public:
	Input myInput;

	bool gameOver;

	char turn;

	int choice;

	char pos[9];

	Board();

	void markBoard();

	void clearBoard();

	void printBoard();

	bool checkCollision();

	bool checkWin();

	int turnBoard();
};


#endif //BOARD_H
