#include <iostream>
#include "golf.hpp"
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "Enter golf's fullname: ";
    cin.getline(g.fullname, Len);
    if (!strlen(g.fullname))
        return 0;
    cout << "Enter golf's handicap: ";
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "fullname: " << g.fullname
              << "\nhandicap: " << g.handicap << std::endl;
}