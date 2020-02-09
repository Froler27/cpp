#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    string filename;
    ifstream inFile;
    cout << "Enter name of data file: ";
    getline(cin, filename);
    inFile.open(filename);
    if (!inFile.is_open())  // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }
    int count = 0;
    char ch;

    while (inFile.get(ch))
        ++count;
    cout << "该文件包含 " << count << " 个字符" << endl;
    inFile.close();

    return 0;
}