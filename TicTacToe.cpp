#include "board.h"

#include <iostream>

int main() {
	Board myBoard;

	while (!myBoard.checkWin()) {
		myBoard.printBoard();

		myBoard.markBoard();
	}

	return 0;
}
