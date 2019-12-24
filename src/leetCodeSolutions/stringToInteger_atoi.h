// Found in https://leetcode.com/problems/string-to-integer-atoi/

// Time Complexity:     O(n)
// Space Complexity:    O(1)

#include <iostream>
#include <limits.h>
#include <cmath>
#include "problemInterface.h"

class SolutionAtoi : public ProblemInterface {
public:
    const std::string testCase_1 = "42";
    const std::string testCase_2 = "        -42";
    const std::string testCase_3 = "-91283472332";
    const std::string testCase_4 = "2147483646";
    const std::string testCase_5 = "4193 with words";
    const std::string testCase_6 = "words and 987";

    const int solution_1 = 42; 
    const int solution_2 = -42; 
    const int solution_3 = INT_MIN; 
    const int solution_4 = 2147483646; 
    const int solution_5 = 4193; 
    const int solution_6 = 0; 

    int myAtoi(std::string str);
    virtual int runTestCases();
};