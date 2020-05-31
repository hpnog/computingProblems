# Found in https://leetcode.com/problems/4sum-ii/
#
# Time Complexity:     O(n^2)
# Space Complexity:    O(n)

class Solution:
    def fourSumCount(self, A: [int], B: [int], C: [int], D: [int]) -> int:
        dict_a_b = self.combinationDict(A, B)
        dict_c_d = self.combinationDict(C, D)
        finalCount = 0
        
        for sum1 in dict_a_b.keys():
            if -sum1 in dict_c_d:
                finalCount += dict_a_b[sum1] * dict_c_d[-sum1]

        return finalCount

    def combinationDict(self, A: [int], B: [int]):
        ret = {}
        for elem1 in A:
            for elem2 in B:
                currSum = elem1 + elem2
                ret[currSum] = 1 if currSum not in ret else ret[currSum] + 1
        return ret

    # Solution 1 - Brute force
    #
    # def fourSumCount(self, A: List[int], B: List[int], C: List[int], D: List[int]) -> int:
    #     finalCount = 0
    #     
    #     for elem1 in A:
    #         for elem2 in B:
    #             for elem3 in C:
    #                 for elem4 in D:
    #                     if elem1 + elem2 + elem3 + elem4 is 0:
    #                         finalCount += 1
    #     
    #     return finalCount
