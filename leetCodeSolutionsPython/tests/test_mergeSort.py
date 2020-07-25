import mergeSort
import unittest

class mergeSortCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_mergeSort(self):
        s = mergeSort.Solution()
        for array, sol in [  
                            (
                                [-777, -8, -6, 0, 2, 5, 11111111, 11, 21, 546, 8888, 546985, 5511224, 9], 
                                [-777, -8, -6, 0, 2, 5, 9, 11, 21, 546, 8888, 546985, 5511224, 11111111]
                            )
                        ]:
            self.assertEqual(s.mergeSort(array), sol)

