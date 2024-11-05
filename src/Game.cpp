#include "Game.h"
#include "Utilities.h"
#include <iostream>

Game::Game(int manualPlayers, int aiPlayers) 
    : isGameOver(false), currentPlayerIsAI(false) {
    board = std::make_unique<Board>();
    gui = std::make_unique<GUI>();
}

void Game::initialize() {
    board->setup();
    gui->initializeWindow();
    run();
}

void Game::run() {
    while (!isGameOver) {
        gui->drawBoard(*board);
        if (currentPlayerIsAI) {
            handleAIMove();
        } else {
            handlePlayerMove();
        }
        checkGameState();
        currentPlayerIsAI = !currentPlayerIsAI;
    }
    gui->displayEndGame();
}

void Game::reset() {
    board->setup();
    isGameOver = false;
}

void Game::checkGameState() {
    if (board->isCheckmate()) {
        isGameOver = true;
        Logger::log("Checkmate!");
    } else if (board->isStalemate()) {
        isGameOver = true;
        Logger::log("Stalemate!");
    }
}

void Game::handlePlayerMove() {
    Move move = gui->getUserMove();
    if (!board->movePiece(move.from, move.to)) {
        Logger::log("Invalid move.");
    }
}

void Game::handleAIMove() {

}
