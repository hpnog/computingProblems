// Found in https://leetcode.com/problems/reverse-integer/

// Time Complexity:     O(log(n))
// Space Complexity:    O(1)

#include<limits.h>

#include "problemInterface.h"

class SolutionInverseInteger : public ProblemInterface {
public:
    int reverse(int x);
    virtual int runTestCases();
};
