#pragma once
#include <string>
#include "Moves.h"

class Player
{
public:
	Player(std::string name);
	std::string playMove();
	int getScore() const;
	void increaseScore();
	int getWins() const;
	int getLosses() const;

private:
	std::string name;
	Moves moves;
	int wins;
	int losses;
	int score;


};

