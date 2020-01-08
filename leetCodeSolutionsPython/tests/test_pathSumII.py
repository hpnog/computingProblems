import pathSumII
from Utils.TreeNode import TreeNode
from Utils.TreeNode import stringToTreeNode
import unittest

class ThreeSumCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_twoSum_convert(self):
        s = pathSumII.Solution()

        for root, target, sol in [(stringToTreeNode(s, "[5,4,8,11,null,13,4,7,2,null,null,5,1]"),
            22, 
            [[5,4,11,2],[5,8,4,5]])]:
            self.assertEqual(s.hasPathSumII(root, target), sol)

    

