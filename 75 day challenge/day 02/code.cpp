#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }

        int length = gcd(str1.length(), str2.length());
        return str1.substr(0, length);
    }

private:
    int gcd(int a, int b)
    {
        while (b)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

void testExample(const std::string &str1, const std::string &str2, const std::string &expected)
{
    Solution solution;
    std::string result = solution.gcdOfStrings(str1, str2);
    std::cout << "Input: \"" << str1 << "\", \"" << str2 << "\"    Result: \"" << result << "\"    Expected: \"" << expected << "\"" << std::endl;
    std::cout << "Test Case: " << (result == expected ? "Passed" : "Failed") << "\n\n";
}

int main()
{
    testExample("ABCABC", "ABC", "ABC");
    testExample("ABABAB", "ABAB", "AB");
    testExample("LEET", "CODE", "");

    return 0;
}