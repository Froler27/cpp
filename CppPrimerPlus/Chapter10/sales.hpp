#ifndef SALES_HPP_
#define SALES_HPP_

namespace SALES
{
    class Sales
    {
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales(const double ar[], int n);
        Sales();
        void showSales();
        const double * getSales();
        const int getQUA();
    };
}

#endif