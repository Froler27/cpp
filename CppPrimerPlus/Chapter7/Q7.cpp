#include <iostream>

using namespace std;

const int Max = 5;

double * fill_array(double * start, double * end);
void show_array(const double * start, const double * end);
void revalue(double r, double * start, double * end);

int main()
{
    double properties[Max];
    
    double * end = fill_array(properties, properties + Max);
    show_array(properties, end);
    if (end > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >>factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double * start, double * end)
{
    double temp;
    int i;
    for (i = 0; i < end - start; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        start[i] = temp;
    }
    return start + i;
}

void show_array(const double * start, const double * end)
{
    for (int i = 0; i < end - start; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << start[i] << endl;
    }
}

void revalue(double r, double * start, double * end)
{
    for (int i = 0; i < end - start; i++)
        start[i] *= r;
}