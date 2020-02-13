#include <iostream>

using namespace std;

double f(double, double);

int main()
{
    double a, b, result;
    cout << "请输入两个数，输入 0 结束：";
    while (cin >> a >> b)
    {
        if (!a || !b) break;
        result = f(a, b);
        cout << "他们的调和平均数为：" << result << endl;
        cout << "请输入两个数：";
    }
    return 0;
}

double f(double x, double y)
{
    return 2.0 * x * y / (x + y);
}