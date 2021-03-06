import twoSum
import unittest

class TwoSumCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_twoSum_convert(self):
        s = twoSum.Solution()
        for nums, target, sol in [([2, 7, 11, 15], 9, [0, 1])]:
            self.assertEqual(s.twoSum(nums, target), sol)

