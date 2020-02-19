#include <iostream>
#include "sales.hpp"

int main()
{
    using namespace SALES;
    Sales s1;
    Sales s2 (s1.getSales(), s1.getQUA());
    s1.showSales();
    s2.showSales();
    return 0;
} 