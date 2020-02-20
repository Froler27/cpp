#include <iostream>

using namespace std;

const int DAYS_OF_ONE_YEAR = 365;
const int HOURS_OF_ONE_DAY = 24;
const int MINUTES_OF_ONE_HOUR = 60;
const int SECONDS_OF_ONE_MINUTE = 60;

int main()
{
    long seconds;
    long day, hour, minute;
    long temp;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    day = seconds / (HOURS_OF_ONE_DAY * MINUTES_OF_ONE_HOUR * SECONDS_OF_ONE_MINUTE);
    temp = seconds % (HOURS_OF_ONE_DAY * MINUTES_OF_ONE_HOUR * SECONDS_OF_ONE_MINUTE);
    hour = temp / (MINUTES_OF_ONE_HOUR * SECONDS_OF_ONE_MINUTE);
    temp %= MINUTES_OF_ONE_HOUR * SECONDS_OF_ONE_MINUTE;
    minute = temp / SECONDS_OF_ONE_MINUTE;
    temp %= SECONDS_OF_ONE_MINUTE;
    cout << seconds << " seconds = "
         << day << " days, "
         << hour << " hours, "
         << minute << " minutes, "
         << temp << " seconds "
         << endl;
    cin.get();
    cin.get();

    return 0;
}