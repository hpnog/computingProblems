import threeSum
import unittest


class ThreeSumCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_twoSum_convert(self):
        s = threeSum.Solution()
        for nums, sol in [([-1, 0, 1, 2, -1, -4], [(-1, -1, 2), (-1, 0, 1)])]:
            self.assertEqual(s.threeSum(nums), sol)

