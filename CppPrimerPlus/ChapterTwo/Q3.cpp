#include <iostream>

using namespace std;

void show1();
void show2();

int main()
{
    show1();
    show1();
    show2();
    show2();
    cin.get();
    
    return 0;
}

void show1()
{
    cout << "Three blind mice" << endl;
}

void show2()
{
    cout << "See how they run" << endl;
}