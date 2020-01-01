# Found in https://leetcode.com/problems/remove-element/
#
# Time Complexity:     O(n)
# Space Complexity:    O(1)

class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        length = len(nums)
        i = 0
        while i < length:
            if nums[i] == val:
                length -= 1
                nums[i] = nums[length]
            else:
                i += 1
        return length

