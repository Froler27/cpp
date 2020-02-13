#include <iostream>
#include <array>
#include <string>

const int Seasons = 4, Max = 20;
const char Snames[Seasons][Max] = {
    "Spring", "Summer", "Fall", "Winter"
};

void fill(double (*pa)[Seasons]);
void show(double da[Seasons]);

int main()
{
    double expenses[Seasons];
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(double (*pa)[Seasons])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(double da[Seasons])
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Express: $" << total << endl;
}