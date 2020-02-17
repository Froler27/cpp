#include <iostream>

using std::cout;
using std::endl;

struct CandyBar{
    char * brand;
    double weight;
    int calorie;
};

void CandyBarConstor(CandyBar &bar, char * brand = (char *)"Millennium Munch", double weight = 2.85, int calorie = 350);
void CandyBarShow(const CandyBar &bar);

int main()
{
    CandyBar bar;
    CandyBarConstor(bar);
    CandyBarShow(bar);
    return 0;
}

void CandyBarConstor(CandyBar &bar, char * brand , double weight, int calorie)
{
    bar.brand = brand;
    bar.weight = weight;
    bar.calorie = calorie;
}

void CandyBarShow(const CandyBar &bar)
{
    cout << "Brand: " << bar.brand
         << "\nWeight: " << bar.weight
         << "\nCalorie: " << bar.calorie
         << endl;
}
