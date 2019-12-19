#include "twoSum.h"

std::vector<int> SolutionTwoSum::twoSum(std::vector<int>& nums, int target) {
    std::vector<int> res;
    std::unordered_map<int,int> haveSeenIt;
    for(unsigned int i = 0; i < nums.size(); i++) {
        if(haveSeenIt.find(target - nums[i]) != haveSeenIt.end()) {
            res.push_back(haveSeenIt[target - nums[i]]);
            res.push_back(i);
            return res;
        }
        haveSeenIt.insert(std::pair<int, int>(nums[i], i));
    }
    return res;
}

int SolutionTwoSum::runTestCases() {
    std::cout << "Selecting Two Sum Problem...\n";
    std::cout << "Going to run test cases:\n\n";



    std::vector<int> testCase_1 = {2, 7, 11, 15};
    int target_1 = 9;
    std::vector<int> solution_1 = {0, 1};
    std::string result = "not checked";
    if(solution_1 == twoSum(testCase_1, target_1)) {
        result = "checked";
    }
    std::cout << "Two Sum of: {2, 7, 11, 15} " 
        << "is expected: \"{0, 1}\" and is " << result << "\n";
        

    return 0;
}