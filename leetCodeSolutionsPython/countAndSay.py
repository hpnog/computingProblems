# Found in https://leetcode.com/problems/count-and-say/
#
# Time Complexity:     O(n*m) - m - the length of the result
# Space Complexity:    O(1)

class Solution(object): 
    def countAndSay(self, n: int) -> str:
        """
        :type n: int
        :rtype: str
        """        
        currRes = "1"
        n = n - 1
        while n > 0:
            lowerBound = 0
            tmpRes = ""
            while lowerBound < len(currRes):
                count = 0
                while lowerBound + count < len(currRes) and currRes[lowerBound + count] == currRes[lowerBound]:
                    count += 1
                tmpRes += str(count) + currRes[lowerBound]
                lowerBound += count

            currRes = tmpRes
            n -= 1

        return currRes