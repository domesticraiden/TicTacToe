#ifndef BOARD_H
#define BOARD_H

#include "player.h"


class Board {
public:
	Player myPlayer;

	char turn = 'X';

	int choice;

	char pos[9];

	Board();

	int turnBoard();

	void markBoard();

	void clearBoard();

	void printBoard();
};


#endif //BOARD_H
