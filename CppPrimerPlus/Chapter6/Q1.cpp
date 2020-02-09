#include <iostream>
#include <cctype>
#include <string>

const int Max = 20;

int main()
{
    using namespace std;
    string str[Max], newStr;
    char ch;
    bool tag = false;
    cout << "输入 @ 停止：" << endl;
    for ( int i = 0; i < Max; i++)
    {
        getline(cin, str[i]);
        newStr = "";
        for (int j = 0; j < str[i].size(); j++)
        {
            if (str[i][j] == '@')
            {
                tag = true;
                break;
            }
            else if (islower(str[i][j]))
                newStr += toupper(str[i][j]);
            else if (isupper(str[i][j]))
                newStr += tolower(str[i][j]);
            else if (isdigit(str[i][j]))
                continue;
            else 
                newStr += str[i][j];
        }
        cout << newStr << endl;
        if (tag)
            break;
    }

    return 0;
}