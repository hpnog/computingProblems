import increasingTripletSubsequence
import unittest

class increasingTripletSubsequenceCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_increasingTripletSubsequence(self):
        s = increasingTripletSubsequence.Solution()

        for arg, sol in [
            ([0, 1, 2, 3, 4, 5], True),
            ([5, 8, -5, -15], False),
            ([0, -1, -2, 3, -4, 5], True)
            ]:
            self.assertEqual(s.increasingTriplet(arg), sol)