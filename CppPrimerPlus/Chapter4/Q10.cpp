#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 3> score;
    cout << "Enter your first score: ";
    cin >> score[0];
    cout << "Enter your second score: ";
    cin >> score[1];
    cout << "Enter your third score: ";
    cin >> score[2];
    cout << "三次的平均成绩为：" << (score[0] + score[1] + score[2]) / 3;

    return 0;
}