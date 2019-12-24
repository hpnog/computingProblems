// Found in https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// Time Complexity:     O(n)
// Space Complexity:    O(1)

#include <iostream>
#include <vector>
#include <limits.h>

#include "problemInterface.h"

class SolutionRemoveDuplicatesFromSortedArray : public ProblemInterface {
public:
    const std::vector<int> testCase_1 = {1,1,2};
    const std::vector<int> testCase_2 = {0,0,1,1,1,2,2,3,3,4};

    const int solution_1 = 2;
    const int solution_2 = 5;

    int removeDuplicates(std::vector<int>& nums);
    virtual int runTestCases();
};