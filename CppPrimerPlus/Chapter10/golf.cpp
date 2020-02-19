#include <iostream>
#include "golf.hpp"
#include <cstring>

void Golf::setgolf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

Golf::Golf()
{
    setgolf();
}

void Golf::setHandicap(int hc)
{
    handicap = hc;
}

void Golf::showgolf()
{
    std::cout << "fullname: " << fullname
              << "\nhandicap: " << handicap << std::endl;
}

bool Golf::setgolf()
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "Enter golf's fullname: ";
    cin.getline(fullname, Len);
    if (!strlen(fullname))
        return false;
    cout << "Enter golf's handicap: ";
    cin >> handicap;
    cin.get();
    return true;
}