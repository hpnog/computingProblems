#include "containerWithMostWater.h"

int SolutionContainerWithMostWater::maxArea(std::vector<int>& height) {
    unsigned int i = 0;
    unsigned int j = height.size() - 1;

    unsigned int currArea = 0;

    while(j > i) {
        unsigned int itArea = (j - i) * std::min(height[i], height[j]);
        if(itArea > currArea)
            currArea = itArea;
            
        if(height[i] < height[j])
            i++;
        else
            j--;
    }
    return currArea;
};

int SolutionContainerWithMostWater::runTestCases() {
	std::cout << "Selecting Container With Most Water Probem...\n";
    std::cout << "Going to run test cases:\n\n";
    
    std::cout << "Test Case 1: [1,8,6,2,5,4,8,3,7] | Expected Result = " << solution_1 << std::endl;
    std::cout << "Achieved Result = " << maxArea(testCase_1) << std::endl << std::endl;

    return 0;
};