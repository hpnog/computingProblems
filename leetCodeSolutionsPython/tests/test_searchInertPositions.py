import searchInsertPositions
import unittest

class SearchInsertPositionsCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_searchInsertPositions(self):
        s = searchInsertPositions.Solution()
        for nums, target, sol in [  ([1, 3, 5, 6], 7, 4),
                                    ([1, 3, 5, 6], 0, 0),
                                    ([1, 3, 5, 6, 9], 6, 3),
                                    ([1, 3, 5, 6, 10], 5, 2)]:
            self.assertEqual(s.searchInsert(nums, target), sol)
