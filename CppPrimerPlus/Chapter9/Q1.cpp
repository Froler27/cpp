#include <iostream>
#include "golf.hpp"
#include <cstring>

int main()
{
    const int MAX = 20;
    golf gs[MAX];
    int i = 0;
    for (i = 0; i < MAX; i++)
        if(!setgolf(gs[i]))
            break;
    for (int j = 0; j < i; j++)
    {
        std::cout << "Golf #" << j + 1 << "\n";
        showgolf(gs[j]);
    }
    int num;
    std::cout << "Enter your choice: ";
    std::cin >> num;
    std::cin.get();
    if (num < 1 || num > i)
    {
        std::cout << "Range is " << 1 << "~" << i << "!" << std::endl;
        return 1;
    }
    char cgName[Len];
    std::cout << "Enter another fullname: ";
    std::cin.getline(cgName, Len);
    int hc;
    std::cout << "Enter relevant hancicap: ";
    std::cin >> hc;
    setgolf(gs[num - 1], cgName, hc);
    for (int j = 0; j < i; j++)
    {
        std::cout << "Golf #" << j + 1 << "\n";
        showgolf(gs[j]);
    }
    return 0;
}