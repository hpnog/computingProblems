# Found in https://leetcode.com/problems/search-insert-positions/
#
# Time Complexity:     O(log(n))
# Space Complexity:    O(n))

class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        
        min, max = 0, len(nums)
        while max > min:
            it = min + ((max - min) >> 1)
            if nums[it] == target:
                return it
            elif nums[it] > target:
                max = it
            else: # elif nums[it] < target:
                min = it + 1
        return max
    