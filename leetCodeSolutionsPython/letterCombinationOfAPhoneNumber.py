# Found in https://leetcode.com/problems/letter-combinations-of-a-phone-number/
# 

from typing import List

class Solution:
    
    def mergeLists(self, l1: List[str], l2: List[str]) -> List[str]:
        res = []
        for elem1 in l1:
            for elem2 in l2:
                res += [elem1 + elem2]
        return res
    
    def getPossibilities(self, digits: str) -> List[str]:
        res = []
        
        if len(digits) is 0:
            return res
        
        if digits in self.letterMap:
            return self.letterMap[digits]
                
        tempRes = self.getPossibilities(digits[1:])
        currRes = self.mergeLists(self.letterMap[digits[0]], tempRes)
            
        self.letterMap[digits] = currRes
        
        return self.letterMap[digits]
    

    def letterCombinations(self, digits: str) -> List[str]:  
        self.letterMap = {
            '2': ['a', 'b', 'c'],
            '3': ['d', 'e', 'f'],
            '4': ['g', 'h', 'i'],
            '5': ['j', 'k', 'l'],
            '6': ['m', 'n', 'o'],
            '7': ['p', 'q', 'r', 's'],
            '8': ['t', 'u', 'v'],
            '9': ['w', 'x', 'y', 'z']
        }
        return self.getPossibilities(digits)