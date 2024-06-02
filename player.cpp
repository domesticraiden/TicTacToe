#include "player.h"

#include <limits>
#include <iostream>

Player::Player() {
}

void Player::clearInputPlayer()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool Player::checkInputPlayer(int choice)
{
    if (std::cin.fail()) {
        return 0;
    }
    else
        return 1;
}

int Player::inputPlayer() {
    std::cin >> choice;

    return choice;
}
