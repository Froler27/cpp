#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void myToupper(string &str);

int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    while (std::getline(cin, str))
    {
        if (str == "q")
        {
            cout << "Bye." << endl;
            break;
        }
        myToupper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
    }
    return 0;
}

void myToupper(string &str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);
}