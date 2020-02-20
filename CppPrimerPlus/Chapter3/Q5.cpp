#include <iostream>

using namespace std;

int main()
{
    long long poplationWorld, poplationUS;
    cout << "Enter the world's poplation: ";
    cin >> poplationWorld;
    cout << "Enter the population of the US: ";
    cin >> poplationUS;
    cout << "The population of the US is " 
         << 100.0 * poplationUS / poplationWorld
         << "% of the the world population."
         << endl;
    cin.get();
    cin.get();

    return 0;
}