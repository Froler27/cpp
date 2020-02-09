#include <iostream>
#include <string>

using namespace std;

struct Patron{
    string name;
    double fund;
};

int main()
{
    cout << "请输入捐献者数目：";
    int num;
    cin >> num;
    cin.get();
    Patron * patrons = new Patron [num];
    for (int i = 0; i < num; i++)
    {
        cout << "请输入第 " << i+1 << " 捐献者的姓名：";
        getline(cin, patrons[i].name);
        cout << "金额：";
        cin >> patrons[i].fund;
        cin.get();
    }
    cout << "===== Grand Patrons =====" << endl;
    int kindNum = 0;
    for (int i = 0; i < num; i++)
    {
        if (patrons[i].fund >= 10000)
            {
                cout << patrons[i].name << "\t\t" << patrons[i].fund << endl;
                kindNum++;    
            }
    }
    if (!kindNum) cout << "none" << endl;
    kindNum = 0;
    cout << "===== Patrons =====" << endl;
    for (int i = 0; i < num; i++)
    {
        if (patrons[i].fund < 10000)
            {
                cout << patrons[i].name << "\t\t" << patrons[i].fund << endl;
                kindNum++;    
            }
    }
    if (!kindNum) cout << "none" << endl;

    return 0;
}