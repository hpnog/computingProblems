# Found in https://leetcode.com/problems/path-sum-ii/
#
# * Time complexity: O(n)
# * Space complexity: O(h) - h is the height of the tree

from Utils.TreeNode import TreeNode
    
class Solution(object):

    def hasPathSumII(self, root: TreeNode, sum: int) -> [[int]]:
        """
        :type root: TreeNode
        :type sum: int
        :rtype: List[List[int]]
        """
        res = []
        currStack = []
                
        if root is not None:
            currStack.append((root, [], 0))
        
        while len(currStack) > 0:
            currNodeObj = currStack.pop()
            currNode = currNodeObj[0]
            currPath = currNodeObj[1].copy()
            currSum = currNodeObj[2]
            
            currPath.append(currNode.val)
            currSum += currNode.val
            
            if currNode.left is None and currNode.right is None:
                if sum == currSum:
                    res.append(list(currPath))
                currPath.pop()
                currSum -= currNode.val
                
            if currNode.right is not None:
                currStack.append((currNode.right, currPath, currSum))
            if currNode.left is not None:
                currStack.append((currNode.left, currPath, currSum))
        
        return res