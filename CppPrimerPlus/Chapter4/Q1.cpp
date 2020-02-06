#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName, lastName;
    int age;
    char grade;
    cout << "What is your first name? ";
    getline(cin, firstName);
    cout << "What is your last name? ";
    getline(cin, lastName);
    cout << "What letter grade do you deserve? ";
    cin.get(grade).get();
    grade += 1;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    cin.get();
    cin.get();

    return 0;
}