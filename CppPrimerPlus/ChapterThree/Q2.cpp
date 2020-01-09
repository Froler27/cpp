#include <iostream>

using namespace std;

const int FOOT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KG_TO_POUND = 2.2;

int main()
{
    int foot, inch, pound;
    
    double height, weight;
    double BMI;
    cout << "Enter your height(foot inch): ";
    cin >> foot >> inch;
    cout << "Enter your weight(pound): ";
    cin >> pound;
    height = (foot * FOOT_TO_INCH + inch) * INCH_TO_METER;
    weight = pound / KG_TO_POUND;
    BMI = weight / height / height;
    cout << "Your BIM is " << BMI << endl;
    cin.get();
    cin.get();

    return 0;
}