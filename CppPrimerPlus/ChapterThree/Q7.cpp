#include <iostream>

using namespace std;

const double KM_TO_MILE = 62.14;
const double GALLON_TO_LITRE = 3.875;

int main()
{
    double consumption;
    cout << "Enter the fuel consumption per 100 km: ";
    cin >> consumption;
    cout << consumption << "/100km = "
         << KM_TO_MILE / consumption * GALLON_TO_LITRE
         << "mpg" << endl;
    cin.get();
    cin.get();

    return 0;
}