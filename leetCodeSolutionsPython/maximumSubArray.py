# Found in https://leetcode.com/problems/maximum-subarray/
#
# Time Complexity:     O(n)
# Space Complexity:    O(1)

from typing import List
 
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        """
        :type nums: List[int]
        :rtype: int
        """     
        currSum = nums[0]
        maxSum = nums[0]
        for i in range(1, len(nums)):
            currSum = max(currSum + nums[i], nums[i])
            if currSum > maxSum:
                maxSum = currSum
        return maxSum