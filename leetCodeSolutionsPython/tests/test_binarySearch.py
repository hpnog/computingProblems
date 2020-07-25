import binarySearch
import unittest

class binarySearchCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_binarySearch(self):
        s = binarySearch.Solution()
        for array, toSearch, sol in [  
                                        ([-777, -8, -6, 0, 2, 5, 9, 11, 21, 546, 8888, 546985, 5511224, 11111111], 546, 9),
                                        ([-777, -8, -6, 0, 2, 5, 9, 11, 21, 546, 8888, 546985, 5511224, 11111111], 0, 3),
                                        ([-777, -8, -6, 0, 2, 5, 9, 11, 21, 546, 8888, 546985, 5511224, 11111111], -777, 0)
                                ]:
            self.assertEqual(s.binarySearch(array, toSearch), sol)

