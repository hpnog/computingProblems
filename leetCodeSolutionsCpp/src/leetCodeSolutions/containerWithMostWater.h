// Found in https://leetcode.com/problems/container-with-most-water/
//
// Time Complexity:     O(n)
// Space Complexity:    O(1)
//

#include <iostream>
#include <vector>
#include "problemInterface.h"


class SolutionContainerWithMostWater : public ProblemInterface {
    public:
        std::vector<int> testCase_1 {1,8,6,2,5,4,8,3,7};
        const int solution_1 = 49;

        int maxArea(std::vector<int>& height);
        virtual int runTestCases();
};
