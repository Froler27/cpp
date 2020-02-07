#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MaxWord = 50;
    string words[MaxWord];
    int i = 0;
    bool tag = true;
    cout << "Enter words (to stop, type the word done):" << endl;
    while (tag)
    {
        cin >> words[i];
        if(words[i] == "done")
            tag = false;
        i++;
    }
    cout << "You Entered a total of " << i - 1 << " words." << endl;

    return 0;
}