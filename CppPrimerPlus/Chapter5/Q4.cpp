#include <iostream>

using namespace std;

int main()
{
    double moneyDaphne = 100, moneyCleo = 100;
    double sumMoneyD = moneyDaphne, sumMoneyC = moneyCleo;
    int year = 0;
    do{
        sumMoneyD += 0.1 * moneyDaphne;
        sumMoneyC *= 1.05;
        year++;
    }while(sumMoneyD >= sumMoneyC);
    cout << year << " 年后，Cleo 的投资价值才能超过 Daphne。"
         << "\n此时 Daphne 的投资价值为：" << sumMoneyD
         << "\nCleo 的投资价值为：" << sumMoneyC
         << endl;

    return 0;
}