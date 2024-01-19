#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int length = flowerbed.size();
        int count = 0;
        for (int i = 0; i < length; i++)
        {
            if (flowerbed[i] == 0)
            {
                if (i == length - 1 or flowerbed[i + 1] == 0)
                {
                    count++;
                    i++;
                }
            }
            else
            {
                i++;
            }
        }

        return (count >= n);
    }
};

int main()
{
    Solution solution;

    // Example 1
    vector<int> flowerbed1 = {1,0,0,0,1,0,0};
    int n1 = 1;
    cout << boolalpha << (solution.canPlaceFlowers(flowerbed1, n1) == true) << endl; // Output: true

    // Example 2
    vector<int> flowerbed2 = {1, 0, 0, 0, 1};
    int n2 = 2;
    cout << boolalpha << (solution.canPlaceFlowers(flowerbed2, n2) == false) << endl; // Output: false

    return 0;
}