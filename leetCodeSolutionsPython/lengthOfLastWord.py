# Found in https://leetcode.com/problems/length-of-last-word/
#
# Time Complexity:     O(n)
# Space Complexity:    O(1)

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        counter = 0
        for char in reversed(s):
            if char == ' ':
                if counter == 0:
                    continue
                else:
                    return counter
            counter += 1
        return counter