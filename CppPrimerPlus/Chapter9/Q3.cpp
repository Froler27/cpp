#include <iostream>
#include <new>
#include <cstring>

struct chaff {
    char dross[20];
    int slag;
};

chaff buf[4];

int main()
{
    chaff * ar1 = new (buf) chaff[2];
    strcpy(ar1[0].dross, "I am happy!");
    strcpy(ar1[1].dross, "Me too!");
    ar1[0].slag = 27;
    ar1[1].slag = 20;
    for (int i = 0; i < 2; i++)
    {
        std::cout << "chaff #" << i + 1 
                  << "\ndross: " << ar1[i].dross
                  << "\nslag: " << ar1[i].slag
                  << std::endl; 
    }

    return 0;
}