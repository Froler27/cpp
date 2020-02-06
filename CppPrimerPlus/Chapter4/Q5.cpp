#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};


int main()
{
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };
    cout << "Brand: " << snack.brand
         << "\nWeight: " << snack.weight
         << "\nCalorie: " << snack.calorie;

    return 0;
}