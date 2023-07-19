/*

290. Word Pattern
Easy
5.9K
683
Companies
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.



Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false


Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        bool ans = 0;
        cout << "hello\n";
        return ans;
    }
};

int main()
{
    Solution ans;

    string pattern, s;
    cin >> pattern >> s;

    if (ans.wordPattern(pattern, s))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}
