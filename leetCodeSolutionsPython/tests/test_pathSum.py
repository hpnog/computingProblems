import pathSum
from pathSum import TreeNode
import unittest

class ThreeSumCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_twoSum_convert(self):
        s = pathSum.Solution()

        for root, target, sol in [(self.stringToTreeNode("[5,4,8,11,null,13,4,7,2,null,null,null,1]"), 22, True)]:
            self.assertEqual(s.hasPathSum(root, target), sol)

    def stringToTreeNode(self, input):
        input = input.strip()
        input = input[1:-1]
        if not input:
            return None

        inputValues = [s.strip() for s in input.split(',')]
        root = TreeNode(int(inputValues[0]))
        nodeQueue = [root]
        front = 0
        index = 1
        while index < len(inputValues):
            node = nodeQueue[front]
            front = front + 1

            item = inputValues[index]
            index = index + 1
            if item != "null":
                leftNumber = int(item)
                node.left = TreeNode(leftNumber)
                nodeQueue.append(node.left)

            if index >= len(inputValues):
                break

            item = inputValues[index]
            index = index + 1
            if item != "null":
                rightNumber = int(item)
                node.right = TreeNode(rightNumber)
                nodeQueue.append(node.right)
        return root



