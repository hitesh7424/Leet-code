#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string mergedString;

        while (!word1.empty() and !word2.empty())
        {
            mergedString.push_back(word1.front());
            mergedString.push_back(word2.front());
            word1.erase(0, 1);
            word2.erase(0, 1);
        }

        if (!word1.empty())
        {
            mergedString += word1;
        }
        if (!word2.empty())
        {
            mergedString += word2;
        }

        return mergedString;
    }
};

int main()
{
    Solution solution;

    // Test case 1
    std::string result1 = solution.mergeAlternately("abc", "pqr");
    std::string expected1 = "apbqcr";
    std::cout << "Test Case 1: " << (result1 == expected1 ? "Passed" : "Failed") << std::endl;

    // Test case 2
    std::string result2 = solution.mergeAlternately("ab", "pqrs");
    std::string expected2 = "apbqrs";
    std::cout << "Test Case 2: " << (result2 == expected2 ? "Passed" : "Failed") << std::endl;

    // Test case 3
    std::string result3 = solution.mergeAlternately("abcd", "pq");
    std::string expected3 = "apbqcd";
    std::cout << "Test Case 3: " << (result3 == expected3 ? "Passed" : "Failed") << std::endl;

    return 0;
}
