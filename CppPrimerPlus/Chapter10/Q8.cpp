#include <iostream>
#include "list.hpp"

void pf(ListNS::Item & a);

int main()
{
    using namespace ListNS;
    using std::cout;
    List list;
    cout << list.isEmpty() << '\n'
        << list.isFull() << '\n';
    list.addItem(7);
    list.addItem(8);
    list.visit(pf);

    return 0;
}

void pf(ListNS::Item & a)
{
    std::cout << a << " ";
}