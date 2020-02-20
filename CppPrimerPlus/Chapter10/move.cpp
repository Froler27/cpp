#include "move.hpp"
#include <iostream>

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "(" << x << ", " << y << ")\n";
}
Move Move::add(const Move & m) const
{
    Move move (x + m.x, y + m.y);
    return move;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}