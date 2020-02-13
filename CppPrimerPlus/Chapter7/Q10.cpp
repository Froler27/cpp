#include <iostream>
#include <cstdlib>

double calculate(double  x, double y, double (*pa)(double, double));
double add(double x, double y);
double minus(double x, double y);
double mul(double x, double y);
double div(double x, double y);

int main()
{
    double q = calculate(2.5, 10.4, add);
    double x, y;
    double (*pf[4])(double, double) {
        add, minus, mul, div
    };
    std::cout << "请输入两个浮点数：";
    while (std::cin >> x >> y)
    {
        for (int j = 0; j < 4; j++)
            std::cout << "第 " << j + 1 << " 个函数：" << calculate(x, y, pf[j]) << std::endl;
        std::cout << "请继续输入两个浮点数：";
    }
    return 0;
}

double calculate(double  x, double y, double (*pa)(double, double))
{
    return pa(x, y);
}

double add(double x, double y)
{
    return x + y;
}

double minus(double x, double y)
{
    return x - y;
}

double mul(double x, double y)
{
    return x * y;
}

double div(double x, double y)
{
    if ( y == 0)
    {
        std::cout << "除数为 0 ！" << std::endl;
        exit(1);
    }
    return x / y;
}