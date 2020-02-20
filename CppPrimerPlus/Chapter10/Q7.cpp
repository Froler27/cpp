#include <iostream>
#include "plorg.hpp"

int main()
{
    Plorg p1, p2 ("Froler", 27);
    p1.show();
    p2.show();
    p1.setCI(7);
    p1.show();

    return 0;
}