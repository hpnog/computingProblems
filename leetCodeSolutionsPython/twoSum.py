# Found in https://leetcode.com/problems/two-sum/
#
# Time Complexity:     O(n)
# Space Complexity:    O(n)

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """(Y

        haveSeenIt = {}
        for idx, val in enumerate(nums):
            if (target - val) in haveSeenIt:
                return [haveSeenIt[target - val], idx]
            haveSeenIt[val] = idx
        return []

