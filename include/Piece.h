#ifndef PIECE_H
#define PIECE_H

#include "Utilities.h"
#include <vector>

enum class PieceType { Pawn, Rook, Knight, Bishop, Queen, King };
enum class Color { White, Black };

class Piece 
{
    public:
        Piece(Color color, Position position);
        virtual ~Piece() = default;

        Color getColor() const;
        Position getPosition() const;
        void setPosition(Position pos);
        virtual PieceType getType() const = 0;
        virtual std::vector<Position> getLegalMoves() const = 0;
        int getValue() const;

    protected:
        Color color;
        Position position;
        int value;
};

class Pawn : public Piece 
{
};

class Rook : public Piece 
{
};

class Knight : public Piece 
{    
};

class Bishop : public Piece
{    
};

class Queen : public Piece
{
};

class King : public Piece
{    
};


#endif // PIECE_H
