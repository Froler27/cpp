#include <iostream>

const int Max = 10;

int main()
{
    using namespace std;
    double donations[Max], sum = 0.0;
    int i = 0;
    cout << "请输入最多 10 个 donation 值，输入非数字结束。" << endl;
    
    while (i < Max && cin >> donations[i])
        sum += donations[i++];
    double avg = sum / i;
    cout << "共输入 " << i << " 个值，平均值为 " << avg << ", ";
    int bigNum = 0;
    for ( int j = 0; j < i; j++)
        if (donations[j] > avg)
            bigNum++;
    cout << "共有 "  << bigNum << " 个数字大于平均值。" << endl;
    
    return 0;
}