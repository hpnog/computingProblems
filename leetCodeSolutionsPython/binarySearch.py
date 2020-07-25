# Binary search
#
# Time Complexity:     O(log(n))
# Space Complexity:    O(1)

class Solution:
    def binarySearch(self, array: [int], toSearch: int) -> int:
        leftBound = 0
        rightBound = len(array) - 1
        currIndex = (rightBound - leftBound) // 2
        while array[currIndex] != toSearch:
            if array[currIndex] > toSearch:
                rightBound = currIndex
                currIndex = leftBound + (rightBound - leftBound) // 2
            elif array[currIndex] < toSearch:
                leftBound = currIndex
                currIndex = leftBound + (rightBound - leftBound) // 2
        return currIndex