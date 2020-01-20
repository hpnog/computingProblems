import validPalindrome
import unittest


class ValidPalindromeCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_twoSum_convert(self):
        s = validPalindrome.Solution()
        for string, sol in [("aba", True),
                            ("qpv2jfidj  jd.iFJ,2,vpq", True),
                            ("dldjfvjfdhfddfigukgjtlvtd4855754JKJDHGDHF", False),
                            ("", True)
                            ]:
            self.assertEqual(s.isPalindrome(string), sol)

