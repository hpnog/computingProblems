// Found in https://leetcode.com/problems/palindrome-number/

// Time Complexity:     O(log(n))
// Space Complexity:    O(1)

#include "problemInterface.h"

class SolutionPalindromeNumber : public ProblemInterface {
public:
    bool isPalindrome(int x);
    virtual int runTestCases();
};
