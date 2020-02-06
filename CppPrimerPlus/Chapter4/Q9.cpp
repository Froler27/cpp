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
    CandyBar * snack = new CandyBar [2];
    snack[0].brand = "Mocha Munch";
    snack[0].calorie = 2.3;
    snack[0].weight = 350;
    snack[1].brand = "KFC";
    snack[1].calorie = 2.7;
    snack[1].weight = 600;
    cout << "Brand: \t" << snack[0].brand << "\t" << snack[1].brand
         << "\nWeight: \t" << snack[0].weight << "\t" << snack[1].weight
         << "\nCalorie: \t" << snack[0].calorie << "\t" << snack[1].calorie;
    delete [] snack;

    return 0;
}