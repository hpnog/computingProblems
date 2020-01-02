import maximumSubArray
import unittest

class MaximumSubArrayCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_maximumSubArray(self):
        s = maximumSubArray.Solution()
        for nums, sol in [  ([-2,1,-3,4,-1,2,1,-5,4], 6)]:
            self.assertEqual(s.maxSubArray(nums), sol)

