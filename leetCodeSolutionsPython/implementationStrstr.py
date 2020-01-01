# Found in https://leetcode.com/problems/implementation-strstr/
#
# Time Complexity:     O(n)
# Space Complexity:    O(1)

class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        
        if len(needle) == 0:
            return 0
        
        i = 0
        while i + len(needle) <= len(haystack):
            string = haystack[i:i + len(needle)]
            if string == needle:
                return i
            i += 1
        return -1