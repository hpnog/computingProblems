import longestSubStringWithAtLeastKRepeatingCharacters
import unittest

class LongestSubStringWithAtLeastKRepeatingCharactersCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_longestSubStringWithAtLeastKRepeatingCharacters(self):
        s = longestSubStringWithAtLeastKRepeatingCharacters.Solution()
        for string, k, sol in [  
                                    ("aaabb", 3, 3),
                                    ("dsdtsdsdaaabbbfdreresdfgvbv", 3, 6)
                                ]:
            self.assertEqual(s.longestSubstring(string, k), sol)

