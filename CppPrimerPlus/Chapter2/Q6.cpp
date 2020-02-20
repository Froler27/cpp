#include <iostream>

using namespace std;

double LightYearToAstro(double);

int main()
{
    double lightYear, astro;
    cout << "Enter the number of light years: ";
    cin >> lightYear;
    cout << lightYear << " light years = "
         << LightYearToAstro(lightYear)
         << " astronomical units." << endl;
    cin.get();
    cin.get();

    return 0;
}

double LightYearToAstro(double ly)
{
    return ly*63240;
}