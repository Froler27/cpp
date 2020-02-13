#include <iostream>
#include <cctype>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
}
  
int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the fullname of student #" << (i + 1) << ": ";
        cin.getline(pa[i].fullname, SLEN);
        int j = 0;
        while (pa[i].fullname[j] != '\0' && isspace(pa[i].fullname[j])) 
            j++;
        if (!pa[i].fullname[j])
            break;
        cout << "Enter the hobby of student #" << (i + 1) << ": ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Enter the ooplevel of student #" << (i + 1) << ": ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

void display1(student st)
{
    cout << "Fullname: " << st.fullname
         << "\nHobby: " << st.hobby
         << "\nOoplevel: " << st.ooplevel << endl; 
}

void display2(const student * ps)
{
    cout << "Fullname: " << ps->fullname
         << "\nHobby: " << ps->hobby
         << "\nOoplevel: " << ps->ooplevel << endl; 
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Fullname: " << pa[i].fullname
             << "\nHobby: " << pa[i].hobby
             << "\nOoplevel: " << pa[i].ooplevel << endl;
    }
}