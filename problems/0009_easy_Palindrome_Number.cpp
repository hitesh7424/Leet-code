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
    bool isPalindrome2(int x)
    {
        if (x < 0)
        {
            return 0;
        }

        int test = x;
        int number_of_digits = 0;
        while (test != 0)
        {
            number_of_digits++;
            test /= 10;
        }
        int first_Half = x;
        int second_Half = 0;

        for (int i = 0; i < number_of_digits / 2; i++)
        {
            second_Half *= 10;
            second_Half += first_Half % 10;
            first_Half /= 10;
        }

        if ((number_of_digits % 2))
        {
            first_Half /= 10;
        }

        // std::cout << first_Half << std::endl;
        // std::cout << second_Half << std::endl;
        return (first_Half == second_Half);
    }

    bool isPalindrome1(int x)
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

    std::cout << palindromeChecker.isPalindrome2(x) << "\n";

    return 0;
}

