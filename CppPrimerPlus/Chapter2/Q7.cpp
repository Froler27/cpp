#include <iostream>

using namespace std;

void showTime(int, int);

int main()
{
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    showTime(hour, minute);
    cin.get();
    cin.get();

    return 0;
}

void showTime(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}