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
    Pizza * pizza = new Pizza;
    cout << "Diameter: ";
    cin >> pizza->diameter;
    cin.get();
    cout << "Company: ";
    getline(cin, pizza->company);
    cout << "Weight: ";
    cin >> pizza->weight;
    cout << pizza->company << "\t" << pizza->diameter << "\t" << pizza->weight;
    delete pizza;

    return 0;
}