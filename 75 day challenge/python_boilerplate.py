class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged_string = ''
        i, j = 0, 0

        while i < len(word1) or j < len(word2):
            if i < len(word1):
                merged_string += word1[i]
                i += 1

            if j < len(word2):
                merged_string += word2[j]
                j += 1

        return merged_string

def main():
    solution = Solution()

    # Test case 1
    result1 = solution.mergeAlternately("abc", "pqr")
    expected1 = "apbqcr"
    print(f"Test Case 1: {'Passed' if result1 == expected1 else 'Failed'}")

    # Test case 2
    result2 = solution.mergeAlternately("ab", "pqrs")
    expected2 = "apbqrs"
    print(f"Test Case 2: {'Passed' if result2 == expected2 else 'Failed'}")

    # Test case 3
    result3 = solution.mergeAlternately("abcd", "pq")
    expected3 = "apbqcd"
    print(f"Test Case 3: {'Passed' if result3 == expected3 else 'Failed'}")

if __name__ == "__main__":
    main()
