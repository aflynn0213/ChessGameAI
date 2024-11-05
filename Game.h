#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "GUI.h"

#include <vector>
#include <memory>

class Game {
public:
    Game(int manualPlayers = 1, int aiPlayers = 1);
    void initialize();
    void run();
    void reset();
    void checkGameState();

private:
    std::unique_ptr<Board> board;
    std::unique_ptr<GUI> gui;
    
    bool isGameOver;
    bool currentPlayerIsAI;

    void handlePlayerMove();
    void handleAIMove();
};

#endif // GAME_H
