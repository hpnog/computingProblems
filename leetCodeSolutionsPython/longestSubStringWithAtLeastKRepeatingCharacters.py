# Found in https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
#

class Solution:        
    def longestSubstring(self, s: str, k: int) -> int:
        if len(s) < k:
            return 0

        countDict = {}
        for char in s:
            try:
                countDict[char] += 1
            except:
                countDict[char] = 1
        
        breaks = []
        for char in countDict:
            if countDict[char] < k:
                breaks.append(char)

        if len(breaks) <= 0:
            return len(s)

        start, maxVal = 0, 0

        for i, elem in enumerate(s):
            if elem in breaks:
                maxVal = max(maxVal, self.longestSubstring(s[start:i], k))
                start = i+1
        maxVal = max(maxVal, self.longestSubstring(s[start:], k))

        return maxVal
