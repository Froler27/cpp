#include <iostream>
#include "golf.hpp"
#include <cstring>

int main()
{
    const int MAX = 3;
    Golf gs[MAX];
    for (int j = 0; j < MAX; j++)
    {
        std::cout << "Golf #" << j + 1 << "\n";
        gs[j].showgolf();
    }
    int num;
    std::cout << "Enter your choice: ";
    std::cin >> num;
    std::cin.get();
    if (num < 1 || num > MAX)
    {
        std::cout << "Range is " << 1 << "~" << MAX << "!" << std::endl;
        return 1;
    }
    char cgName[Len];
    std::cout << "Enter another fullname: ";
    std::cin.getline(cgName, Len);
    int hc;
    std::cout << "Enter relevant hancicap: ";
    std::cin >> hc;
    gs[num - 1].setgolf(cgName, hc);
    for (int j = 0; j < MAX; j++)
    {
        std::cout << "Golf #" << j + 1 << "\n";
        gs[j].showgolf();
    }
    return 0;
}