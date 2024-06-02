#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
	int choice;

	Player();

	void clearInputPlayer();

	bool checkInputPlayer(int choice);

	int inputPlayer();
};


#endif //PLAYER_H
