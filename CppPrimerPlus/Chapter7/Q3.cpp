#include <iostream>

using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volum;
};

void show(box);
void count(box *);

int main()
{
    box a = {
        "First", 5, 5, 5
    };
    count(&a);
    show(a);
    return 0;
}

void show(box a)
{
    cout << "mark: " << a.maker 
         << "\nheight: " << a.height
         << "\nwidth: " << a.width
         << "\nlength: " << a.length
         << "\nvolum: " << a.volum 
         << endl;
}

void count(box * a)
{
    a->volum = a->height * a->length * a->width;
}