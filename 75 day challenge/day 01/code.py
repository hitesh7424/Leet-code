class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged_string = []
        string1 = list(word1)
        string2 = list(word2)

        while string1 and string2:
            merged_string.append(string1[0])
            merged_string.append(string2[0])
            string1.pop(0)
            string2.pop(0)
        
        if string1:
            merged_string += string1
        if string2:
            merged_string += string2
        
        return ''.join(merged_string)




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
