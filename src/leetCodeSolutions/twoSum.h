// Found in https://leetcode.com/problems/two-sum/

// Time Complexity:     O(n)
// Space Complexity:    O(n)

#include <iostream>
#include <vector>
#include <unordered_map>

#include "problemInterface.h"

class SolutionTwoSum : public ProblemInterface {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    virtual int runTestCases();
};