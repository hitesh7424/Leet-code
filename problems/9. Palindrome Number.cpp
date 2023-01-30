/*

9. Palindrome Number
Easy
8.6K
2.4K
Companies
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?

*/


#include <iostream>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return 0;
        }

        size_t reversed = 0;
        int original = x;
        while (x != 0)
        {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return (reversed == original);
    }
};

#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    Solution palindromeChecker;

    std::cout << palindromeChecker.isPalindrome(x) << "\n";

    return 0;
}

/*
Line 14: Char 33: runtime error: signed integer overflow: 998765432 * 10 cannot be represented in type 'int' (solution.cpp)
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:23:33


*/
