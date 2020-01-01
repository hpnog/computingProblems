import removeElement
import unittest

class RemoveElementCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_removeElement(self):
        s = removeElement.Solution()
        for nums, target, sol in [([3, 2, 2, 3], 3, 2)]:
            self.assertEqual(s.removeElement(nums, target), sol)

