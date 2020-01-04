# Found in https://leetcode.com/problems/two-sum/
#
# Time Complexity:     O(n^2)
# Space Complexity:    O(n)

import itertools
from typing import List

class Solution(object):
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = set()
        num_checked = set()

        # Add to the map the value as a key and its index as the value
        # In repetitions the last index will be stored
        last_indices = {n: i for i, n in enumerate(nums)}

        for index_1, num_1 in enumerate(nums):
            # -nums is the remainder needed to have a valid answer
            target = - num_1

            # If checked, the correct value already exists
            if num_1 in num_checked:
                continue
            num_checked.add(num_1)

            # Iterate nums from the currentIndex+1
            for index_2, num_2 in itertools.islice(enumerate(nums), index_1 + 1, None):
                # this condition ensures that
                # third number exists and is taken from different place
                if last_indices.get(target - num_2, 0) > index_2:
                    result.add(tuple(sorted([num_1, num_2, target - num_2])))
        return list(result)