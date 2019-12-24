#include "removeDuplicatesFromSortedArray.h"

int SolutionRemoveDuplicatesFromSortedArray::removeDuplicates(std::vector<int>& nums) {
    int currentVal = INT_MIN;
    int currLength = 0;
    for(unsigned int i = 0; i < nums.size(); i++) {
        if(nums[i] > currentVal) {
            nums[currLength] = nums[i];
            currentVal = nums[i];
            currLength++;
        }
    }
    return currLength;
};

int SolutionRemoveDuplicatesFromSortedArray::runTestCases() {
    std::cout << "Selecting Remove Duplicates From Sorted Array Probem...\n";
    std::cout << "Going to run test cases:\n\n";

    std::vector<int> arg1 = testCase_1;
    std::vector<int> arg2 = testCase_2;

    std::cout << "Removed Duplicates of: 1st test case is expected: " << solution_1 << " | Result is: " << removeDuplicates(arg1) << std::endl;
    std::cout << "Removed Duplicates of: 2nd test case is expected: " << solution_2 << " | Result is: " << removeDuplicates(arg2) << std::endl;
 
    return 0;

}
