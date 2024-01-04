class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        if str1 + str2 != str2 + str1:
            return ""

        from math import gcd
        return str1[: gcd(len(str1), len(str2))]


def main():
    solution = Solution()

    examples = [
        {"str1": "ABCABC", "str2": "ABC", "expected": "ABC"},
        {"str1": "ABABAB", "str2": "ABAB", "expected": "AB"},
        {"str1": "LEET", "str2": "CODE", "expected": ""},
    ]

    for example in examples:
        str1, str2, expected = example["str1"], example["str2"], example["expected"]
        result = solution.gcdOfStrings(str1, str2)
        print(f"Input: '{str1}', '{str2}'    Result: '{result}'    Expected: '{expected}'")
        print(f"Test Case: {'Passed' if result == expected else 'Failed'}\n")

if __name__ == "__main__":
    main()

