#include <iostream>

template <typename T>
T max5(T ar[]);

int main()
{
    int ar1[5] = {1, 2, 3, 4, 5};
    double ar2[5] = {1.1, 2.2, 3.1, 9.9, 5.2};
    std::cout << max5(ar1) << "\n" << max5(ar2) << std::endl;
    return 0;
}

template <typename T>
T max5(T ar[])
{
    T max = ar[0];
    for (int i = 1; i < 5; i++)
        if (max < ar[i])
            max = ar[i];
    return max;
}