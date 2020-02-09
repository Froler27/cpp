#include <iostream>

int main()
{
    using namespace std;
    char chioce;
    cout << "Please enter one of the following chioces:\n"
         << "c) carnivore\t" "p) pianist\n"
            "t) tree\t\t"    "g) game" << endl;
    do{
        cin >> chioce;
        switch (chioce)
        {
            case 'c': cout << "A maple is a carnivore." << endl; break;
            case 'p': cout << "A maple is a pianist." << endl; break;
            case 't': cout << "A maple is a tree." << endl; break;
            case 'g': cout << "A maple is a game." << endl; break; 
            default : cout << "Please enter a c, p, t, or g: "; 
            continue;
        }
        break;
    }while(true);

    return 0;
}