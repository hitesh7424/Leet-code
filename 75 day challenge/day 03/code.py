class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        pass

def main():
    solution = Solution()

    # Test Case 1
    candies1 = [2, 3, 5, 1, 3]
    extraCandies1 = 3
    result1 = solution.kidsWithCandies(candies1, extraCandies1)
    assert result1 == [True, True, True, False, True], f"Test Case 1 Failed. Expected: [True, True, True, False, True], Got: {result1}"

    # Test Case 2
    candies2 = [4, 2, 1, 1, 2]
    extraCandies2 = 1
    result2 = solution.kidsWithCandies(candies2, extraCandies2)
    assert result2 == [True, False, False, False, False], f"Test Case 2 Failed. Expected: [True, False, False, False, False], Got: {result2}"

    # Test Case 3
    candies3 = [12, 1, 12]
    extraCandies3 = 10
    result3 = solution.kidsWithCandies(candies3, extraCandies3)
    assert result3 == [True, False, True], f"Test Case 3 Failed. Expected: [True, False, True], Got: {result3}"

    print("All test cases passed!")

if __name__ == "__main__":
    main()


