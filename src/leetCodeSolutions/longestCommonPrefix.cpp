#include "longestCommonPrefix.h"

std::string SolutionLongestCommonPrefix::longestCommonPrefix(std::vector<std::string>& strs) {
    std::string result = "";
    
    if(strs.size() == 0)
        return result;
    
    for(unsigned int i = 0; i < strs[0].size(); i++) {
        for(unsigned int j = 1; j < strs.size(); j++) {
            if(strs[j][i] != strs[0][i])
                return result;
        }
        result += strs[0][i];
    }
    return result;
};

int SolutionLongestCommonPrefix::runTestCases() {
    std::cout << "Going to run test cases:\n\n";

    std::vector<std::string> testCase_1 = {"flower","flow","flight"};
    std::string solution_1 = "fl";
    std::cout << "Longest Common Prefix of: {\"flower\",\"flow\",\"flight\"} " 
        << "is expected: \"" << solution_1 << "\" Result is: " 
        << longestCommonPrefix(testCase_1) << std::endl;
    
    std::vector<std::string> testCase_2 = {"dog","racecar","car"};
    std::string solution_2 = "";
    std::cout << "Longest Common Prefix of: {\"dog\",\"racecar\",\"car\"} " 
        << "is expected: \"" << solution_2 << "\" Result is: " 
        << longestCommonPrefix(testCase_2) << std::endl;
    
    return 0;
}