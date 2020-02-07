#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MONTH = 12;
    const int YEAR = 3;
    string month[MONTH] {
        "January", "February", "March", "April",
        "May", "June", "July", "August", 
        "September", "October", "November", "December"
    };
    int salesVolume[YEAR][MONTH];
    int sum[YEAR] {0, 0, 0};
    int sumTotal = 0;

    cout << "请输入近年来每个月《C++ For Fools》的销售量，按照下面的月份提示进行输入。" << endl;
    for (int i = 0; i < YEAR; i++)
    {
        cout << "===== 第 " << i+1 << " 年 =====" << endl;
        for(int j = 0; j < MONTH; j++)
        {
            cout << month[j]<< ": ";
            cin >> salesVolume[i][j] ;
            sum[i] += salesVolume[i][j] ;
        }
    }
    for (int i = 0; i < YEAR; i++)
    {
        cout << "第 " << i+1 << " 年的总销售量为：" << sum[i] << endl;
        sumTotal += sum[i];
    }
    cout << YEAR << " 年的总销量为：" << sumTotal << endl;

    return 0;
}