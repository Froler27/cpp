#include <iostream>
#include <string>

int main()
{
    using namespace std;
    const int ArSize = 20;
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    lastName = lastName + ", " + firstName;
    cout << "Here's the information in a single string: "
         << lastName << endl;

    return 0;
}