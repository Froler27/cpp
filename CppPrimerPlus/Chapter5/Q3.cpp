#include <iostream>

using namespace std;

int main()
{
    double num, sum = 0;
    cout << "请输入数字，输入 0 结束。\n\n请输入数字：";
    while(true)
    {
        cin >> num;
        sum += num;
        cout << "目前所有数字的累积和为：" << sum;
        if (num == 0) break;
        cout << "\n请输入数字：";
    }

    return 0;
}