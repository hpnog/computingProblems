// Found in https://leetcode.com/problems/longest-palindromic-substring/
//
// Time Complexity:     O(n^2) - As expanding from the center may take O(n)
// Space Complexity:    O(1)
//

#include <iostream>

#include "problemInterface.h"

class SolutionLongestPalindromeSubstring : public ProblemInterface {
public:
    std::pair<short, short> expandFromTheCenter(std::string &s, short i);
    std::string longestPalindrome(std::string s);
    virtual int runTestCases();
};