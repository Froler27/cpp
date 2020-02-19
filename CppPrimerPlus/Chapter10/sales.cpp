#include "sales.hpp"
#include <iostream>
#include <cstdlib>

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            sales[i] = ar[i];
        if (n <= QUARTERS && n > 0)
        {
            average = max = min = sales[0];
            for (int i = 1; i < n; i++)
            {
                average += sales[i];
                if (sales[i] > max)
                    max = sales[i];
                else if (sales[i] < min) 
                    min = sales[i];
            }
            average /= n;
        }
        else
        {
            std::cout << "n is wrong!" << std::endl;
            exit(1);
        }
        
    }

    Sales::Sales()
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Enter sale #" << i + 1 << ": ";
            std::cin >> sales[i]; 
        }
        average = max = min = sales[0];
        for (int i = 1; i < QUARTERS; i++)
        {
            average += sales[i];
            if (sales[i] > max)
                max = sales[i];
            else if (sales[i] < min)
                min = sales[i];
        }
        average /= QUARTERS;
        
    }

    void Sales::showSales()
    {
        std::cout << "Sales: ";
        for (int i = 0; i < QUARTERS; i++)
            std::cout << sales[i] << " ";
        std::cout << "\naverage: " << average
                    << "\nmax: " << max
                    << "\nmin: " << min
                    << std::endl;
    }

    const double * Sales::getSales()
    {
        return sales;
    }

    const int Sales::getQUA()
    {
        return QUARTERS;
    }
}