#include "Piece.h"

Piece::Piece(Color color, Position position) 
    : color(color), position(position), value(0) {}

Color Piece::getColor() const {
    return color;
}

Position Piece::getPosition() const {
    return position;
}

void Piece::setPosition(Position pos) {
    position = pos;
}

int Piece::getValue() const {
    return value;
}

class Pawn : public Piece {
public:
    Pawn(Color color, Position position) : Piece(color, position) { value = 1; }
    
    PieceType getType() const override { return PieceType::Pawn; }

    std::vector<Position> getLegalMoves() const override {
        return {};
    }
};
