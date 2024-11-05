#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <iostream>

struct Position {
    int row;
    int col;

    bool operator==(const Position& other) const {
        return row == other.row && col == other.col;
    }
};

enum class MoveType { Normal, Capture, Castling, EnPassant, Promotion };

struct Move {
    Position from;
    Position to;
    MoveType type;
};

class Logger {
public:
    static void log(const std::string& message);
};

#endif // UTILITIES_H
