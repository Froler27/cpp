#include <iostream>
#include <cstring>

template <typename T>
T maxn(T ar[], int n);

template <> const char * maxn(const char * ar[], int n);

int main()
{
    int ar1[6] = {1, 2, 9, 4, 5, -8};
    double ar2[4] = {1.1, 2.2, 9.9, 5.2};
    const char * ar3[5] = {
        "ABC",
        "DEF",
        "DD",
        "UUUU",
        "V"
    };
    std::cout << maxn(ar1, 6) << "\n"
              << maxn(ar2, 4) << "\n"
              << maxn(ar3, 5) << std::endl;
    return 0;
}

template <typename T>
T maxn(T ar[], int n)
{
    T max = ar[0];
    for (int i = 1; i < n; i++)
        if (max < ar[i])
            max = ar[i];
    return max;
}

template <> const char * maxn(const char * ar[], int n)
{
    const char * max = ar[0];
    for (int i = 1; i < n; i++)
        if (strlen(max) < strlen(ar[i]))
            max = ar[i];
    return max;
}