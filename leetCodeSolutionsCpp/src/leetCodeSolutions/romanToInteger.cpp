#include <iostream>

#include "romanToInteger.h"

int SolutionRomanToInteger::romanToInt(std::string s) {
    int result = 0;
    if(s.size() > 0)
        result = romanNumerals[s.back()];
    for(int i = s.size() - 2; i >= 0; i--) {
        const int currVal = romanNumerals[s[i]];
       
        if(romanNumerals[s[i + 1]] > currVal)
            result -=  currVal;
        else
            result += currVal;
    }
    return result;
}  

int SolutionRomanToInteger::runTestCases() {
    std::cout << "Going to run test cases:\n\n";

    std::string testCase_1 = "III";
    int solution_1 = 3;
    std::cout << "Roman To Integer of: " << testCase_1 
        << " is expected: " << solution_1 << " Result is: " 
        << romanToInt(testCase_1) << std::endl;
    
    std::string testCase_2 = "IV";
    int solution_2 = 4;
    std::cout << "Roman To Integer of: " << testCase_2 
        << " is expected: " << solution_2 << " Result is: " 
        << romanToInt(testCase_2) << std::endl;

    std::string testCase_3 = "IX";
    int solution_3 = 9;
    std::cout << "Roman To Integer of: " << testCase_3 
        << " is expected: " << solution_3 << " Result is: " 
        << romanToInt(testCase_3) << std::endl;
    
    std::string testCase_4 = "LVIII";
    int solution_4 = 58;
    std::cout << "Roman To Integer of: " << testCase_4 
        << " is expected: " << solution_4 << " Result is: " 
        << romanToInt(testCase_4) << std::endl;

    std::string testCase_5 = "MCMXCIV";
    int solution_5 = 1994;
    std::cout << "Roman To Integer of: " << testCase_5 
        << " is expected: " << solution_5 << " Result is: " 
        << romanToInt(testCase_5) << std::endl;
    
    return 0;
}