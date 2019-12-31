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
        """

        haveSeenIt = {}
        res = []
        for idx, val in enumerate(nums):
            if((target - val) in haveSeenIt):
                res.append(haveSeenIt[target - val])
                res.append(idx)
                return res
            haveSeenIt[val] = idx
        return res

