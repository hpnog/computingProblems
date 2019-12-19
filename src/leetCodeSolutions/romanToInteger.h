// Found in https://leetcode.com/problems/roman-to-integer/
//
// Time Complexity:     O(n)
// Space Complexity:    O(1)

#include <unordered_map>

#include "problemInterface.h"

class SolutionRomanToInteger : public ProblemInterface {
public:
    
    std::unordered_map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int romanToInt(std::string s);   
    virtual int runTestCases(); 
};