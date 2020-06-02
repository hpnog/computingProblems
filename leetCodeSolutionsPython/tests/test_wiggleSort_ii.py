import wiggleSort_ii
import unittest


class wiggleSort_iiCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def checkWave(self, arg: [int]) -> bool:
        low = True
        for i in range(len(arg)):
            if low:
                if i > 0 and arg[i-1] <= arg[i]:
                    return False
                if i < (len(arg) - 1) and arg[i+1] <= arg[i]:
                    return False
            else:
                if i > 0 and arg[i-1] >= arg[i]:
                    return False
                if i < (len(arg) - 1) and arg[i+1] >= arg[i]:
                    return False
            low = not low
        return True

    def test_twoSum_convert(self):
        s = wiggleSort_ii.Solution()
        for arg in [
                    ([1, 5, 1, 1, 6, 4]),
                    ([1, 2, 5, 5, 5, 4, 8, 9, 2, 1, 5, 4, 2, 0, 0])
                ]:
            s.wiggleSort(arg)
            self.assertTrue(self.checkWave(arg))

