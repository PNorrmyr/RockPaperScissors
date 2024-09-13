#include "Moves.h"
#include <cstdlib>
#include <string>
#include <cmath>
#include <iostream>

std::string Moves::getMove() {
	int random = rand() % 3 + 1;

	switch (random)
	{
	case 1:
		return "rock";
	case 2:
		return "paper";
	case 3:
		return "scissor";
	default:
		break;
	}

}
