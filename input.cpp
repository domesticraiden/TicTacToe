#include "input.h"

#include <limits>
#include <iostream>

Input::Input() {
}

bool Input::checkType(int choice) {
	if (std::cin.fail())
		return 1;
	else
		return 0;
}

void Input::clearInput() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int Input::useInput(int choice) {
	std::cin >> choice;

	return choice;
}
