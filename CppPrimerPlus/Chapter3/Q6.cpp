#include <iostream>

using namespace std;

int main()
{
    long kilometers, litres;
    cout << "Enter the number of kilometers: ";
    cin >> kilometers;
    cout << "Enter the number of liters: ";
    cin >> litres;
    cout << "Fuel consumption per 100 km is "
         << 100.0 * litres / kilometers
         << endl;
    cin.get();
    cin.get();

    return 0;
}