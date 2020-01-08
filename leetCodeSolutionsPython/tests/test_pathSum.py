import pathSum
from Utils.TreeNode import TreeNode
from Utils.TreeNode import stringToTreeNode
import unittest

class ThreeSumCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_twoSum_convert(self):
        s = pathSum.Solution()

        for root, target, sol in [(stringToTreeNode(s, "[5,4,8,11,null,13,4,7,2,null,null,null,1]"), 22, True)]:
            self.assertEqual(s.hasPathSum(root, target), sol)
