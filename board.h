#ifndef BOARD_H
#define BOARD_H

#include "player.h"


class Board {
public:
    int choice;

    char turn = 'X';

    char pos[9];

    Player myPlayer;

    Board();

    int turnBoard();

    void markBoard();

    void clearBoard();

    void printBoard();
};


#endif //BOARD_H
