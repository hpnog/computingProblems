# Found in https://leetcode.com/problems/regular-expression-matching/
#
# First written solution
#
# Time Complexity:     ++
# Space Complexity:    ++

class Solution:
    def isMatch(self, s: str, p: str) -> bool:

        # If given string and regular exp are fully consumed, isMatch
        # If only one is empty is not match
        if len(s) is 0 and len(p) is 0:
            return True
        elif len(p) is 0:
            return False
        elif len(s) is 0:
            # Need to check if remainder of regex is expendable
            tempP = p[:]
            while len(tempP) >= 2:
                if tempP[1] is '*':
                    tempP = tempP[2:]
                else:
                    break
            if len(tempP) is 0:
                return True
            return False
        
        # Validate whether or not the following char is repeatable
        many = False
        if len(p) > 1 and p[1] is '*':
            many = True
            
        nextRegularExp = p[2:] if many else p[1:]
        
        if not many:
            if (p[0] is '.' or s[0] is p[0]) and self.isMatch(s[1:], nextRegularExp):
                return True
        else:
            if self.isMatch(s, nextRegularExp):
                return True
            currChar = p[0]
            currS = s[:]
            while len(currS) > 0 and (currChar is currS[0] or currChar is '.'):
                if self.isMatch(currS[1:], nextRegularExp):
                    return True
                currS = currS[1:]
        
        return False

# Optimal solution
#
# class Solution:
#     def isMatch(self, text, pattern):
#         memo = {}
#         def dp(i, j):
#             if (i, j) not in memo:
#                 if j == len(pattern):
#                     ans = i == len(text)
#                 else:
#                     first_match = i < len(text) and pattern[j] in {text[i], '.'}
#                     if j+1 < len(pattern) and pattern[j+1] == '*':
#                         ans = dp(i, j+2) or first_match and dp(i+1, j)
#                     else:
#                         ans = first_match and dp(i+1, j+1)
# 
#                 memo[i, j] = ans
#             return memo[i, j]
# 
#         return dp(0, 0)