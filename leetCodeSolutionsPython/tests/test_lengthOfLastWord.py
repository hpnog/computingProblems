import lengthOfLastWord
import unittest

class LengthOfLastWordCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_lengthOfLastWord(self):
        s = lengthOfLastWord.Solution()
        for string, sol in [    ("Hello World", 5),
                                ("Hello World          ", 5),
                                ("Hello World   bghghfhfg   hhhhfGf    ", 7)]:
            self.assertEqual(s.lengthOfLastWord(string), sol)

