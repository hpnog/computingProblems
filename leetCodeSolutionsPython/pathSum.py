# Found in https://leetcode.com/problems/path-sum/
#
# * Time complexity: O(n)
# * Space complexity: O(h) - h is the height of the tree

# Definition for a binary tree node.

from Utils.TreeNode import TreeNode

class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        if root is None:
            return False
        if root.left is None and root.right is None:
            if sum == root.val:
                return True
            return False

        return self.hasPathSum(root.left, sum - root.val) or self.hasPathSum(root.right, sum - root.val)