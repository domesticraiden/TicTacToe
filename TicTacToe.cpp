#include "board.h"

#include <iostream>

int main() {
	Board myBoard;

	while (true) {
		myBoard.printBoard();

		myBoard.markBoard();
	}

	return 0;
}
