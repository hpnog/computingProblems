// Found in https://leetcode.com/problems/zigzag-conversion/
//
// Time Complexity:     O(n)
// Space Complexity:    O(n)
//

#include <iostream>
#include <cmath>

#include "problemInterface.h"

class SolutionZigZagConversion : public ProblemInterface {
public:
    std::string convert(std::string s, int numRows);
    virtual int runTestCases();
};