#include <iostream>
#include "Moves.h"
#include <string>
#include "Player.h"
#include <time.h>

int main()
{
    srand(time(NULL));

    Player p1("Philip");

    std::cout << p1.playMove() << std::endl;
}

