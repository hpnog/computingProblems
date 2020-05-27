import medianOfTwoSortedArrays
import unittest

class MedianOfTwoSortedArraysCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_medianOfTwoSortedArrays(self):
        s = medianOfTwoSortedArrays.Solution()
        for nums1, nums2, sol in [  
                                    ([1, 2], [3, 4], 2.5),
                                    ([1, 2, 8], [3, 4], 3)
                                ]:
            self.assertEqual(s.findMedianSortedArrays(nums1, nums2), sol)

