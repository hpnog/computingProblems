# Found in https://leetcode.com/problems/generate-parentheses/
# 
# Time Complexity:     O(n)
# Space Complexity:    O(n)

from typing import List

class Solution:
    def generateParenthesisRecursive(self, toOpen: int, opened: int, curr: str) -> List[str]:          
        if toOpen is 0 and opened is 0:
            self.res.append(curr)
            return

        if opened is not 0:
            self.generateParenthesisRecursive(toOpen, opened - 1, curr + ")")
        if toOpen is not 0:
            self.generateParenthesisRecursive(toOpen - 1, opened + 1, curr + "(")    
    
    def generateParenthesis(self, n: int) -> List[str]:
        self.res = []
        self.generateParenthesisRecursive(n, 0, "")
        return self.res