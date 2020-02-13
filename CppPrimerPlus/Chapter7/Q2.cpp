#include <iostream>

using namespace std;

const int Max = 10;

int finput(double *);
void fshow(double *, int);
double fcount(double *, int);

int main()
{
    double score[Max], average;
    int num;
    cout << "请输入高尔夫成绩：";
    num = finput(score);
    cout << "你输入的成绩为：" << endl;
    fshow(score, num);
    average = fcount(score, num);
    cout << "你的平均成绩为：" << average << endl;
    return 0;
}

int finput(double score[])
{
    int i;
    for (i = 0; i < Max; ++i)
        if (!(cin >> score[i]) || score[i] < 0)
            break;
    return i;
}

void fshow(double score[], int num)
{
    for (int i = 0; i < num; ++i)
        cout << score[i] << "\t";
    cout << endl;
}

double fcount(double score[], int num)
{
    double sum = 0;
    for (int i = 0; i < num; ++i)
        sum += score[i];
    return sum / num;
}