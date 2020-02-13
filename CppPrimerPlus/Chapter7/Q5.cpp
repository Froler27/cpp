#include <iostream>

using namespace std;

int factorial(int);

int main()
{
    cout << "请输入一个整数：";
    int n, res;
    while (cin >> n)
    {
        if (n < 0)
            break;
        res = factorial(n);
        cout << n << "! = " << res;
        cout << "\n请输入一个整数：";
    }
    cout << "Bye!" << endl;
}

int factorial(int n)
{
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}