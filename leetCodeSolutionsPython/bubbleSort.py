# Bubble Sort
#
# Time Complexity:     O(n*log(n))
# Space Complexity:    O(1)

class Solution:
    def bubbleSort(self, array: [int]) -> [int]:
        dirty = False
        for i in range(len(array)):
            for j in range(0, len(array) - 1 - i):
                if array[j] > array[j + 1]:
                    dirty = True
                    array[j], array[j + 1] = array[j + 1], array[j]

            if not dirty:
                break
            dirty = False
        return array