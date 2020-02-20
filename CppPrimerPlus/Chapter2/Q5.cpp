#include <iostream>

using namespace std;

double CToF(double);

int main()
{
    double Cel, Fah;
    cout << "Please enter a Calsius value: ";
    cin >> Cel;
    Fah = CToF(Cel);
    cout << Cel << " degrees Celsius is "
         << Fah << " degrees Fahrenheit.";
    cin.get();
    cin.get();

    return 0;
}

double CToF(double Cel)
{
    return Cel*1.8 + 32.0;
}
