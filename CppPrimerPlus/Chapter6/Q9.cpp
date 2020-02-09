#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Patron{
    string name;
    double fund;
};

int main()
{
    ifstream inFile;
    inFile.open("Q9.txt");

    int num;
    inFile >> num;
    inFile.get();
    Patron * patrons = new Patron [num];
    for (int i = 0; i < num; i++)
    {
        getline(inFile, patrons[i].name);
        inFile >> patrons[i].fund;
        inFile.get();
    }
    inFile.close();

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