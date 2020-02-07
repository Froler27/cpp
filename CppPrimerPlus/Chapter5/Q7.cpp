#include <iostream>
#include <string>

using namespace std;

struct car {
    string producer;
    int birthday;
};

int main()
{
    cout << "How many cars do you wish to catalog? ";
    int numCar;
    cin >> numCar;
    car * cars = new car [numCar];
    for (int i = 0; i < numCar; i++)
    {
        cout << "Car #" << i+1 << ":\n"
             << "Please enter the make: ";
        cin.get();
        getline(cin, cars[i].producer);
        cout << "Please enter the year made: ";
        cin >> cars[i].birthday;
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < numCar; i++)
    {
        cout << cars[i].birthday << " " << cars[i].producer << endl;
    }

    return 0;
}