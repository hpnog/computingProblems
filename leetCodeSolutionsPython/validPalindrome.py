# Found in https://leetcode.com/problems/vaid-palindrome/
#
# Time Complexity:     O(n)
# Space Complexity:    O(1)

class Solution:
    def isPalindrome(self, s: str) -> bool:
        i = 0
        j = len(s) - 1
        s = s.lower()
        while i < j:
            while i < j and not s[i].isalnum():
                i += 1
            while i < j and not s[j].isalnum():
                j -= 1
            if i > j:
                break
            if s[i] != s[j]:
                return False
            else:
                i += 1
                j -= 1
        return True