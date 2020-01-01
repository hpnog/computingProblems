import implementationStrstr
import unittest

class ImplementationStrstrCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_implementationStrstr(self):
        s = implementationStrstr.Solution()
        for nums, target, sol in [  ("mississipi", "issip", 4),
                                    ("hello", "ll", 2),
                                    ("helssslo", "ll", -1),
                                    ("", "", 0),
                                    ("ierhjgdfkgjgoamigodsjfisdofojsddfosjd", "amigo", 13)]:
            self.assertEqual(s.strStr(nums, target), sol)

