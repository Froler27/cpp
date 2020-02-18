#include "sales.hpp"
#include <iostream>
#include <cstdlib>

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            s.sales[i] = ar[i];
        if (n <= QUARTERS && n > 0)
        {
            s.average = s.max = s.min = s.sales[0];
            for (int i = 1; i < n; i++)
            {
                s.average += s.sales[i];
                if (s.sales[i] > s.max)
                    s.max = s.sales[i];
                else if (s.sales[i] < s.min)
                    s.min = s.sales[i];
            }
            s.average /= n;
        }
        else
        {
            std::cout << "n is wrong!" << std::endl;
            exit(1);
        }
        
    }

    void setSales(Sales & s)
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Enter sale #" << i + 1 << ": ";
            std::cin >> s.sales[i]; 
        }
        s.average = s.max = s.min = s.sales[0];
        for (int i = 1; i < QUARTERS; i++)
        {
            s.average += s.sales[i];
            if (s.sales[i] > s.max)
                s.max = s.sales[i];
            else if (s.sales[i] < s.min)
                s.min = s.sales[i];
        }
        s.average /= QUARTERS;
        
    }

    void showSales(const Sales & s)
    {
        std::cout << "Sales: ";
        for (int i = 0; i < QUARTERS; i++)
            std::cout << s.sales[i] << " ";
        std::cout << "\naverage: " << s.average
                  << "\nmax: " << s.max
                  << "\nmin: " << s.min
                  << std::endl;
    }
}