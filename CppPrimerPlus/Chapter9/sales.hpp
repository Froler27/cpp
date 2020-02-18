#ifndef SALES_HPP_
#define SALES_HPP_

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales & a, const double ar[], int n);

    void setSales(Sales & s);

    void showSales(const Sales & s);
}

#endif