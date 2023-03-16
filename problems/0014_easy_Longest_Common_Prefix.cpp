/*

14. Longest Common Prefix
Easy
12.4K
3.7K
Companies
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &str)
    {
        string res = "";
        sort(str.begin(), str.end());

        string a = str[0];
        string b = str[str.size() - 1];
        for (int i = 0; i < str[0].size(); i++)
        {
            if (a[i] == b[i])
            {
                res += a[i];
            }
            else
            {
                break;
            }
        }
        return res;
    }
};

int main()
{
    vector<string> strs;
    int mum;
    cin >> mum;

    for (size_t i = 0; i < mum; i++)
    {
        string str;
        cin >> str;
        strs.push_back(str);
    }

    Solution ans;

    cout << ans.longestCommonPrefix(strs) << "\n";

    return 0;
}
