#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MONTHCOUNT = 12;
    string month[MONTHCOUNT] {
        "January", "February", "March", "April",
        "May", "June", "July", "August", 
        "September", "October", "November", "December"
    };
    int salesVolume[MONTHCOUNT];
    int sum = 0;

    cout << "请输入全年每个月《C++ For Fools》的销售量，按照下面的月份提示进行输入。" << endl;
    for (int i = 0; i < MONTHCOUNT; i++)
    {
        cout << month[i] << ": ";
        cin >> salesVolume[i];
        sum += salesVolume[i];
    }
    cout << "\n这一年的总销售量为：" << sum << endl;


    return 0;
}