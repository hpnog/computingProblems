# Found in https://leetcode.com/problems/increasing-triplet-subsequence/
#
# Time Complexity: O(n)
# Space Complexity: O(1)
 
class Solution:
    def increasingTriplet(self, nums: [int]) -> bool:
        l1, l2 = float('inf'), float('inf')
        for elem in nums:
            if elem > l2:
                return True
            elif elem < l1:
                l1 = elem
            elif l1 < elem < l2:
                l2 = elem
        return False