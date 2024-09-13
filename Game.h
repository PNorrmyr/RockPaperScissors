#pragma once
#include <iostream>
#include "Player.h"
#include <vector>

class Game
{
public:
	void initialize(int noPlayers);
	void taketurns();
	void getWinner();

private:
	int rounds;
	int noPlayers;
	Player* player;
	std::vector<Player> players;

};

