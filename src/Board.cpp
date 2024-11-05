#include "Board.h"
#include <iostream>

Board::Board() {
    setup();
}

void Board::setup() {
    squares.resize(8, std::vector<std::unique_ptr<Piece>>(8, nullptr));
    pieces.clear();
    // TODO: Initialize all pieces here and set them to their starting positions
}

bool Board::movePiece(Position from, Position to) {
    if (!isValidMove(from, to)) return false;
    squares[to.row][to.col] = std::move(squares[from.row][from.col]);
    squares[from.row][from.col] = nullptr;
    return true;
}

bool Board::isValidMove(Position from, Position to) const {
    if (from.row < 0 || from.col < 0 || from.row >= 8 || from.col >= 8) return false;
    return true; // TODO: Add more rules for valid moves
}

bool Board::isCheck() const {
    // TODO
    return false;
}

bool Board::isCheckmate() const {
    return isCheck() && !generateLegalMoves().size();
}

void Board::undoLastMove() {
    // TODO
}

const std::vector<std::unique_ptr<Piece>>& Board::getPieces() const {
    return pieces;
}
