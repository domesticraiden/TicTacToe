#include "board.h"
#include "player.h"

#include <iostream>

int main() {
    Board myBoard;

    while (true) {
        myBoard.printBoard();
        myBoard.markBoard();
    }

    return 0;
}
