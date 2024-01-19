from typing import List


class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        length = len(flowerbed)
        counter = 0
        i = 0
        while i < length:
            if flowerbed[i] == 0:
                if i == length - 1 or flowerbed[i + 1] == 0:
                    counter += 1
                    i += 2
                else:
                    i += 1
            else:
                i += 2

        return counter >= n


def main():
    # Example usage:
    solution = Solution()
    flowerbed1 = [1,0,0,0,1,0,0]
    n1 = 2
    print(solution.canPlaceFlowers(flowerbed1, n1))

    flowerbed2 = [1, 0, 0, 0, 0, 0, 0, 0, 1]
    n2 = 3
    print(solution.canPlaceFlowers(flowerbed2, n2))

    flowerbed3 = [0, 0, 1]
    n3 = 1
    print(solution.canPlaceFlowers(flowerbed3, n3))


if __name__ == "__main__":
    main()
