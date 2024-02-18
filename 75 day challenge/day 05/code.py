

class Solution:
    def reverseVowels(self, s: str) -> str:
        ans = list(s)
        vowels = "aeiouAEIOU"
        start, end = 0, len(ans)-1

        while start < end:
            if ans[start] not in vowels:
               start += 1
            if ans[end] not in vowels:
               end -= 1
            if ans[start] in vowels and ans[end] in vowels:
                ans[start], ans[end] = ans[end], ans[start]
                start += 1
                end -= 1
        return ''.join(ans)
               
        


def main():
    test_cases = [
        ("hello", "holle"),
        ("leetcode", "leotcede"),
        ("HELLO", "HOLLE"),
        ("HeLlo", "HoLle"),
        ("bcdfgh", "bcdfgh"),
        ("", "")
    ]
    solution = Solution()

    for s, expected_output in test_cases:
        result = solution.reverseVowels(s)
        print(f"Input: {s}, Output: {result}, Expected: {expected_output}")
        assert result == expected_output, f"Test failed for input: {s}"

if __name__ == "__main__":
    main()
