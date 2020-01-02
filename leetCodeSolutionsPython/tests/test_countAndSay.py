import countAndSay
import unittest

class CountAndSayCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_countAndSay(self):
        s = countAndSay.Solution()
        for nums, sol in [  (1, "1"),
                            (2, "11"),
                            (3, "21"),
                            (4, "1211"),
                            (9, "31131211131221")]:
            self.assertEqual(s.countAndSay(nums), sol)

