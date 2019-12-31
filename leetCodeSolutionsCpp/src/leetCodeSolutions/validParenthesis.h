// Found in https://leetcode.com/problems/valid-parentheses/
//
// Time Complexity:     O(n)
// Space Complexity:    O(n)
//

#include <iostream>

#include "problemInterface.h"

class SolutionValidParenthesis : public ProblemInterface {
public:
    bool isValid(std::string s);
    virtual int runTestCases();
};

