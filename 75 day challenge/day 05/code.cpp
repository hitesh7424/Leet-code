#include <iostream>
#include <cassert>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool isVowel(char x)
    {
        static const std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        return vowels.find(x) != vowels.end();
    }
    string reverseVowels(string s)
    {
        int start = 0, end = s.size();
        while (start < end)
        {
            if (!(isVowel(s[start])))
            {
                start++;
            }
            if (!(isVowel(s[end])))
            {
                end--;
            }
            if (isVowel(s[start]) and isVowel(s[end]))
            {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        }
        return s;
    }
};

void runTests()
{
    struct TestCase
    {
        string input;
        string expected_output;
    };

    TestCase test_cases[] = {
        {"hello", "holle"},
        {"leetcode", "leotcede"},
        {"HELLO", "HOLLE"},
        {"HeLlo", "HoLle"},
        {"bcdfgh", "bcdfgh"},
        {"", ""}};

    for (const auto &test_case : test_cases)
    {
        Solution solution;
        string result = solution.reverseVowels(test_case.input);
        cout << test_case.input << " " << result << " " << test_case.expected_output << endl;
        assert(result == test_case.expected_output);
    }
}

int main()
{
    runTests();
    return 0;
}
