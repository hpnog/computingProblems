// Found in https://leetcode.com/problems/longest-substring-without-repeating-characters/

// Time Complexity:     O(n)
// Space Complexity:    O(1) - The size of the charset/alphabet limits the size of the unordered_map. 

#include <iostream>
#include <unordered_map>

#include "problemInterface.h"

class SolutionLongestSubstringWithoutRepeatingCharacters : public ProblemInterface {
public:
    int lengthOfLongestSubstring(std::string s);
    virtual int runTestCases();
};
