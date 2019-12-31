# Found in https://leetcode.com/problems/two-sum/
#
# Time Complexity:     O(n)
# Space Complexity:    O(n)

import unittest

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
            if((target - val) in haveSeenIt.keys()):
                res.append(haveSeenIt[target - val])
                res.append(idx)
                return res
            haveSeenIt[val] = idx
        return res

class TwoSumCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_twoSum_convert(self):
        s = Solution()
        for nums, target, sol in [([2, 7, 11, 15], 9, [0, 1])]:
            self.assertEqual(s.twoSum(nums, target), sol)


if __name__ == '__main__':
    unittest.main()
