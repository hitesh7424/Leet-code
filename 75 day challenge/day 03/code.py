from typing import List


class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_candies = max(candies)
        return [(candy + extraCandies >= max_candies) for candy in candies]

def main():
    solution = Solution()

    # Test Case 1
    candies1 = [2, 3, 5, 1, 3]
    extraCandies1 = 3
    result1 = solution.kidsWithCandies(candies1, extraCandies1)
    if result1 == [True, True, True, False, True]:
        print("Test Case 1 Passed")
    else:
        print(f"Test Case 1 Failed")

    # Test Case 2
    candies2 = [4, 2, 1, 1, 2]
    extraCandies2 = 1
    result2 = solution.kidsWithCandies(candies2, extraCandies2)
    if result2 == [True, False, False, False, False]:
        print("Test Case 2 Passed")
    else:
        print(f"Test Case 2 Failed")

    # Test Case 3
    candies3 = [12, 1, 12]
    extraCandies3 = 10
    result3 = solution.kidsWithCandies(candies3, extraCandies3)
    if result3 == [True, False, True]:
        print("Test Case 2 Passed")
    else:
        print(f"Test Case 3 Failed")


if __name__ == "__main__":
    main()


