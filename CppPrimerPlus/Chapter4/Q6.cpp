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
    CandyBar snack[2] = {
        {"Mocha Munch", 2.3, 350},
        {"KFC", 2.7, 600}
    };
    cout << "Brand: \t" << snack[0].brand << "\t" << snack[1].brand
         << "\nWeight: \t" << snack[0].weight << "\t" << snack[1].weight
         << "\nCalorie: \t" << snack[0].calorie << "\t" << snack[1].calorie;

    return 0;
}