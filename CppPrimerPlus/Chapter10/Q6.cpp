#include <iostream>
#include "move.hpp"

int main()
{
    Move m1 (20, 6), m2;
    m1.showmove();
    m2.showmove();
    m2 = m2.add(m1);
    m1.reset(7, 6);
    m1.showmove();
    m2.showmove();

    return 0;
}