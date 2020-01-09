#include <iostream>

using namespace std;

int main()
{
    int height, foot, inch;
    const int tran = 12;
    cout << "Enter your height: ";
    cin >> height;
    foot = height / tran;
    inch = height % tran;
    cout << "Your height is " 
         << foot << " feet " 
         << inch << " inches." 
         << endl; 
    cin.get();
    cin.get();

    return 0;
}