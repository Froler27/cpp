#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void show(const char * str);
void show(const char * str, int n);

int main()
{
    int n;
    const char * str = "Hi! I'm Froler!";
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        show(str, n);

    return 0;
}

void show(const char * str)
{
    cout << str << endl;
}

void show(const char * str, int n)
{
    static int count = 1;
    if (n)
        for (int i = 0; i < count; i++)
            show(str);
    cout << endl;
    count++;
}