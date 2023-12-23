#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string functionName(string arg1, string arg2) {
        return 0;
    }
};


int main() {
    Solution solution;

    // Test case 1
    std::string result1 = solution.functionName("abc", "pqr");
    std::string expected1 = "apbqcr";
    std::cout << "Test Case 1: " << (result1 == expected1 ? "Passed" : "Failed") << std::endl;

    // Test case 2
    std::string result2 = solution.functionName("ab", "pqrs");
    std::string expected2 = "apbqrs";
    std::cout << "Test Case 2: " << (result2 == expected2 ? "Passed" : "Failed") << std::endl;

    // Test case 3
    std::string result3 = solution.functionName("abcd", "pq");
    std::string expected3 = "apbqcd";
    std::cout << "Test Case 3: " << (result3 == expected3 ? "Passed" : "Failed") << std::endl;

    return 0;
}