/*

1137. N-th Tribonacci Number
Easy
3.1K
145
Companies
The Tribonacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.



Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
Example 2:

Input: n = 25
Output: 1389537


Constraints:

0 <= n <= 37
The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.

*/

#include <iostream>

class Solution
{
public:
    // iterative
    int tribonacci(int n)
    {
        int t[n + 3];
        t[0] = 0;
        t[1] = 1;
        t[2] = 1;

        for (size_t i = 3; i <= n; i++)
        {
            t[i] = t[i - 3] + t[i - 2] + t[i - 1];
        }

        return t[n];
    }

    // recursive
    int tribonacciR(int n)
    {
        if (n == 0 || n < 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;

        int x = n - 3;

        return tribonacciR(x) + tribonacciR(x + 1) + tribonacciR(x + 2);
    }
};

int main()
{
    int n;
    std::cin >> n;

    Solution ans;
    std::cout << ans.tribonacciR(n) << "\n";

    return 0;
}
