#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string company;
    double diameter;
    double weight;
};

int main()
{
    Pizza pizza;
    cout << "Company: ";
    getline(cin, pizza.company);
    cout << "Diameter: ";
    cin >> pizza.diameter;
    cout << "Weight: ";
    cin >> pizza.weight;
    cout << pizza.company << "\t" << pizza.diameter << "\t" << pizza.weight;

    return 0;
}