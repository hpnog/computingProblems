import regularExpressionMatching
import unittest

class RegularExpressionMatchingCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_regularExpressionMatching(self):
        s = regularExpressionMatching.Solution()
        for a, p, sol in [  
                            ("a", ".*..a*", False),
                            ("a", "ab*", True),
                            ("ab", ".*", True),
                            ("aa", "a", False),
                            ("ab", ".*c", False),
                            ("aab", "c*a*b", True),
                            ("aaa", "ab*a*c*a", True),
                            ("aaa", "ab*a", False),
                            ("mississippi", "mis*is*ip*.", True),
                            ("mississippi", "mis*is*p*.", False)
                        ]:
            self.assertEqual(s.isMatch(a, p), sol)

