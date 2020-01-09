# Found in https://leetcode.com/problems/two-sum/
#
# Solution 1
# 
# Time Complexity:     O(n³)
# Space Complexity:    O(1)

import sys

class Solution:
    def threeSumClosest(self, nums: [int], target: int) -> int:
        minSum = sys.maxsize * 2 + 1
        
        for i_1, n_1 in enumerate(nums[:len(nums) - 2]):
            for i_2, n_2 in enumerate(nums[i_1 + 1:len(nums) - 1]):
                for n_3 in nums[i_1 + i_2 + 2:]:
                    currSum = sum([n_1, n_2, n_3])
                    if abs(target - currSum) < abs(target - minSum):
                        minSum = currSum
        return minSum      

# Solution 2
# 
# Time Complexity:     O(n⁴)
# Space Complexity:    O(1)
# 
# class Solution(object):
#     def threeSumClosest(self, nums, target):
#         """
#         :type nums: List[int]
#         :type target: int
#         :rtype: int
#         """
#         nums.sort()
#         triplate = []
#         prevSum = float("-inf")
#         prevDiff = target - prevSum
#         for i in range(len(nums) - 2):
#             if i > 0 and nums[i] == nums[i - 1]:
#                 continue
#             left, right = i + 1, len(nums) - 1
#             while left < right:
#                 currentSum = nums[i] + nums[left] + nums[right]
#                 currentDiff = target - currentSum
#                 prevDiff = target - prevSum
#                 if abs(currentDiff) < abs(prevDiff):
#                     triplate = [nums[i], nums[left], nums[right]]
#                     prevDiff = currentDiff
#                     prevSum = currentSum
#                 if currentSum < target:
#                     while left < right and nums[left] == nums[left + 1]:
#                         left += 1
#                     left += 1
#                 elif currentSum > target:
#                     while left < right and nums[right] == nums[right - 1]:
#                         right -= 1
#                     right -= 1
#                 else:
#                     return sum(triplate[:])
#         return sum(triplate[:])
# 