#include "player.h"

#include <iostream>

Player::Player() {
}

int Player::inputPlayer() {
    while (true) {
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
        } else {
            choice = choice - 1;

            if (choice >= 0 and choice <= 8)
                break;
        }
    }

    return choice;
}
