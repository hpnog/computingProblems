# Found in https://leetcode.com/problems/median-of-two-sorted-arrays/
#
# * Time complexity: O(n log n)
# * Space complexity: O(1)

from typing import List

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        totalList = nums1 + nums2
        totalList.sort()
        length = len(totalList)
        
        if length % 2 is 0:
            return ((totalList[(length // 2) - 1] + totalList[length // 2]) / 2)
        else:
            return totalList[length // 2]