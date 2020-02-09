#include <iostream>

const int strsize = 50;

struct bop {
    char fullname[strsize];     // real name
    char title[strsize];        // job title
    char bopname[strsize];      // secret BOP name
    int preference;             // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    using namespace std;
    bop members[5] = {
        {"Wimp Macho", "Teacher", "KK", 0},
        {"Raki Rhodes", "Junior Programmer", "KP", 1},
        {"Celia Laiter", "Freelancer", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "VEE", 1},
        {"PatHand", "Student", "LOOPY", 2}
    };
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name\t" "b. display by title\n"
            "c. display by bopname\t" "d. display by preference\n"
            "q. quit" << endl;
    cout << "Enter your choice: ";
    char choice;
    do {
        cin >> choice;
        cin.get();
        switch(choice)
        {
            case 'a': for (int i = 0; i < 5; i++) cout << members[i].fullname << endl; break;
            case 'b': for (int i = 0; i < 5; i++) cout << members[i].title << endl; break;
            case 'c': for (int i = 0; i < 5; i++) cout << members[i].bopname << endl; break;
            case 'd': for (int i = 0; i < 5; i++) 
                if (members[i].preference == 0) cout << members[i].fullname << endl;
                else if (members[i].preference == 1) cout << members[i].title << endl;
                else cout << members[i].bopname << endl; break;
            case 'q': cout << "Bye!" << endl; break;
            default : cout << "Please enter a a, b, c, d, or q: "; continue;
        }
        if (choice == 'q') break;
        else cout << "Next choice: ";
    } while (true);

    return 0;
}