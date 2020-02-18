#include <iostream>
#include "sales.hpp"

int main()
{
    using namespace SALES;
    Sales s1, s2;
    setSales(s1);
    setSales(s2, s1.sales, QUARTERS);
    showSales(s1);
    showSales(s2);
    return 0;
}