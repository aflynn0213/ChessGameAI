#include <iostream>
#include "Game.h"

int main() {
    int manualPlayers, aiPlayers;

    std::cout << "Welcome to Chess!" << std::endl;
    std::cout << "Enter the number of manual players (1 or 2): ";
    std::cin >> manualPlayers;

    if (manualPlayers == 1) {
        aiPlayers = 1;
    } else {
        aiPlayers = 0; // 2-player mode
    }

    // Initialize the game
    Game chessGame(manualPlayers, aiPlayers);
    chessGame.initialize();

    // Main game loop
    chessGame.run();

    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}
