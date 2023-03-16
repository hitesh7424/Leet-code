/*

1. Two Sum

Easy

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109

Only one valid answer exists.

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int nums_Size = nums.size();

        int start = 0, end = 0;

        for (start = 0; start < nums_Size; start++)
        {

            for (end = start + 1; end < nums_Size; end++)
            {
                if ((nums[start] + nums[end]) == target)
                {
                    return {start, end};
                }
            }
        }

        return {};
    }
};

/*
// chatGPT

#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    // {3, 2, 3} 6
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (map.count(complement))
        {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}
*/
int main()
{
    Solution leet_Func;

    vector<int> array;
    array = {3, 2, 3};
    int target = 6; // output: [0,1]
    vector<int> ans;
    ans = leet_Func.twoSum(array, target);

    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
