#include "Game.h"
#include "Player.h"
#include <vector>
#include <iostream>
#include <string>

Game::Game() {}

void Game::initialize(int noPlayers) 
{

	for (int i = 0; i < noPlayers; i++) {
		std::string playerName;
		std::cout << "Enter name of player " << i + 1 << ": " << std::endl;
		std::cin >> playerName;
		new Player(playerName);
	}

	int noRounds;
	std::cout << "Enter how many rounds you would like to play: " << std::endl;
	std::cin >> noRounds;
	rounds = noRounds;

}