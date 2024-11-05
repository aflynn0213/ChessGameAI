#ifndef BOARD_H
#define BOARD_H

#include "Utilities.h"
#include <vector>
#include <memory>

class Board {
public:
    Board();
    void setup();
    bool movePiece(Position from, Position to);
    bool isValidMove(Position from, Position to) const;
    bool isCheck() const;
    bool isCheckmate() const;
    bool isStalemate() const;
    void undoLastMove();

private:
};

#endif // BOARD_H
