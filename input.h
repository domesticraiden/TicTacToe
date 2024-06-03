#ifndef INPUT_H
#define INPUT_H

class Input {
public:
	int choice;

	Input();

	bool checkType(int choice);

	void clearInput();

	int useInput(int choice);
};


#endif //INPUT_H
