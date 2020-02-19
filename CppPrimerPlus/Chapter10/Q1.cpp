#include <iostream>
#include "account.hpp"

int main()
{
    Account ac ("Froler", "3346721", 1000);
    ac.show();
    ac.deposit(800);
    ac.show();
    ac.fetch(900);
    ac.show();

    return 0;
}