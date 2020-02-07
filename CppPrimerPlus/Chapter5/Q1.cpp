#include <iostream>

using namespace std;

int main()
{
    int a, b, tag, sum = 0;
    cout << "请输入两个整数：";
    cin >> a >> b;
    if(a > b)
    {
        tag = a;
        a = b;
        b = tag;
    }
    for(int i=a; i<=b; i++)
        sum += i;
    cout << a << "~" << b 
         << " 之间所有整数的和为 "
         << sum;
         
    return 0;
}