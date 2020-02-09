#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter words (q to quit): " << endl;
    string word;
    int numVowel = 0, numConsonant = 0, numCommen = 0;

    while (cin >> word)
    {
        if (word.size() == 1 && word[0] == 'q') break;
        if (isalpha(word[0]))
        {
            int alpha = tolower(word[0]);
            switch (alpha)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': numVowel++; break;
            
            default: numConsonant++; break;
            }
        }else
            numCommen++;
    }
    cout << numVowel << " words beginning with vowels\n"
         << numConsonant << " words beginning with consonants\n"
         << numCommen << " others" << endl;

    return 0;
}