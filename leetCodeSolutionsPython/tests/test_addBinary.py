import addBinary
import unittest

class AddBinaryCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_addBinary_convert(self):
        s = addBinary.Solution()

        for l1, l2, sol in [
            ("1", "11", "100"),
            ("1010", "1011", "10101")
            ]:
            self.assertEqual(s.addBinary(l1, l2), sol)

    

