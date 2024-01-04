#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int length = candies.size();
        vector<bool> ans(length, false);

        int max_candy = INT_MIN;
        for (int candy:candies)
        {
            max_candy = max(max_candy, candy);
        }
        for (size_t i = 0; i < length; i++)
        {
            ans[i] = (candies[i] + extraCandies >= max_candy);
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    // Test Case 1
    vector<int> candies1 = {2, 3, 5, 1, 3};
    int extraCandies1 = 3;
    vector<bool> result1 = solution.kidsWithCandies(candies1, extraCandies1);
    cout << "Test Case 1 " << endl;
    cout << "Result: [true, true, true, false, true]" << endl;
    cout << "Actual Result: ";
    for (bool val : result1)
    {
        cout << boolalpha << val << " ";
    }
    cout << endl
         << endl;

    // Test Case 2
    vector<int> candies2 = {4, 2, 1, 1, 2};
    int extraCandies2 = 1;
    vector<bool> result2 = solution.kidsWithCandies(candies2, extraCandies2);
    cout << "Test Case 2 " << endl;
    cout << "Result: [true, false, false, false, false]" << endl;
    cout << "Actual Result: ";
    for (bool val : result2)
    {
        cout << boolalpha << val << " ";
    }
    cout << endl
         << endl;

    // Test Case 3
    vector<int> candies3 = {12, 1, 12};
    int extraCandies3 = 10;
    vector<bool> result3 = solution.kidsWithCandies(candies3, extraCandies3);
    cout << "Test Case 3 " << endl;
    cout << "Result: [true, false, true]" << endl;
    cout << "Actual Result: ";
    for (bool val : result3)
    {
        cout << boolalpha << val << " ";
    }
    cout << endl;

    return 0;
}
