# Found in https://leetcode.com/problems/add-binary/
#
# Time Complexity:     O(n)
# Space Complexity:    O(n)


class Solution:
    def addBinary(self, a: str, b: str) -> str:
        res = "" 
        i = 0
        length = max(len(a), len(b)) 
        carry = 0
        while i < length:
            currVal = carry
            if i < len(a) and a[len(a) - i - 1] == "1":
                currVal += 1
            if i < len(b) and b[len(b) - i - 1] == "1":
                currVal += 1
            
            if currVal <= 1:
                res += str(currVal)
                carry = 0
            elif currVal == 2:
                res += "0"
                carry = 1
            elif currVal == 3:
                res += "1"
                # carry = 1
            i += 1
        if carry == 1:
            res += "1"
        return res[::-1]