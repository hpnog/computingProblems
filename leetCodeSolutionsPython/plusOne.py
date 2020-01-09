# Found in https://leetcode.com/problems/plus-one/
# 
# Time Complexity:     O(n)
# Space Complexity:    O(1)

class Solution:
    def plusOne(self, digits: [[int]]) -> [[int]]:
        if digits[len(digits) - 1] == 9:
            i = len(digits) - 1
            while i > 0 and digits[i] == 9:
                digits[i] = 0
                i -= 1
            if i == 0:
                if digits[0] == 9:
                    digits.insert(0, 1)
                    digits[1] = 0
                else:
                    digits[0] += 1
            else:
                digits[i] += 1
        else:
            digits[len(digits) - 1] += 1
        return digits