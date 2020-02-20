#include <iostream>

using namespace std;

const int DEGREE_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;

int main()
{
    int degree, marc, sarc;
    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> marc;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sarc;
    cout << degree << "degrees, " 
         << marc << " minutes, "
         << sarc << " seconds = "
         << degree + marc * 1.0 / DEGREE_TO_MINUTE + sarc * 1.0 / MINUTE_TO_SECOND / DEGREE_TO_MINUTE
         << " degrees" << endl;
    cin.get();
    cin.get();

    return 0;
}