#include <iostream>

using namespace std;

int Fill_array(double arr[], int n);
void Show_array(double arr[], int n);
int Reverse_array(double arr[], int n);

int main()
{
    const int Size = 5;
    double arr[Size];
    int n;
    n = Fill_array(arr, Size);
    cout << "数组内容：\n";
    Show_array(arr, n);
    Reverse_array(arr, n);
    cout << "\n反转后的数组内容：\n";
    Show_array(arr, n);
    int tag = Reverse_array(arr + 1, n - 2);
    cout << "\n反转数组除第一个和最后一个元素之外的所有元素后，数组内容：\n";
    if (!tag)
        Show_array(arr, n);
    else
        cout << "数组元素不足！" << endl;
    return 0;
}

int Fill_array(double arr[], int n)
{
    cout << "请输入最多 " << n << " 数字（输入非数字终止）：";
    int i = 0;
    while (cin >> arr[i] && i < 5)
        i++;
    return i;
}

void Show_array(double arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int Reverse_array(double arr[], int n)
{
    double temp;
    if (n < 0)
        return 1;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    return 0;
}