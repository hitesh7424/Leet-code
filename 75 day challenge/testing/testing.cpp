#include <iostream>
#include <string>
using namespace std;

#include <unordered_set>

bool isVowel(char x)
{
    static const std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    return vowels.find(x) != vowels.end();
}

int main()
{
    cout << isVowel('a') << endl;

    cout << isVowel('b') << endl;

    cout << isVowel('A') << endl;
    cout << isVowel('C') << endl;

    return 0;
}