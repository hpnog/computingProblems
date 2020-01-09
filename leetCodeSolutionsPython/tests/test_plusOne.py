import plusOne
import unittest


class PlusOneCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_twoSum_convert(self):
        s = plusOne.Solution()
        for nums, sol in [  
            ([0], [1]),
            ([1, 0], [1, 1]),
            ([9, 9, 9, 9, 9, 9], [1, 0, 0, 0, 0, 0, 0]),
            ([1, 2, 3], [1, 2, 4]),
            ([6, 8, 3, 7, 0, 5, 9], [6, 8, 3, 7, 0, 6, 0])
            ]:
            self.assertEqual(s.plusOne(nums), sol)


