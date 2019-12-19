// Found in https://leetcode.com/problems/longest-common-prefix/
//
// Time Complexity:     O(n) - where n is the number of characters of all the strings in the given vector
// Space Complexity:    O(1)

#include <iostream>
#include <vector>

#include "problemInterface.h"

class SolutionLongestCommonPrefix : public ProblemInterface {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs);
    virtual int runTestCases();
};