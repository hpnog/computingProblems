# Found in https://leetcode.com/problems/wiggle-sort-ii/
#
# * Time complexity: O(n log n)
# * Space complexity: O(n)

class Solution(object):
    def wiggleSort(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        nums.sort()
        
        lo_half = nums[:len(nums)//2]
        hi_half = nums[len(nums)//2:]
        
        if len(nums) % 2 == 1: #hanle odd cases
            lo_half.append(hi_half.pop(0))
                   
        # reverse order of arrays to avoid colleasion of repeat numbers
        nums[::2] = lo_half[::-1]
        nums[1::2] = hi_half[::-1]