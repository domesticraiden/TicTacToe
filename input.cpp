#include "input.h"

#include <limits>
#include <iostream>

Input::Input() {
}

bool Input::checkType(int choice) {
	if (std::cin.fail())
		return 0;
	else
		return 1;
}

void Input::clearInput() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int Input::useInput(int choice) {
	std::cin >> choice;

	return choice;
}
