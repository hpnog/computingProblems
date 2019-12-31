#include "stringToInteger_atoi.h"

int SolutionAtoi::myAtoi(std::string str) {        
    unsigned int currIndex = 0;
    int result = 0;
    bool positiveVal = true;
    
    // Jump to the start of the value
    while (currIndex < str.size() && str[currIndex] == ' ')
        currIndex++;
    
    if(currIndex < str.size() && str[currIndex] == '-') 
        positiveVal = false;
    
    if(currIndex < str.size() && (str[currIndex] == '+' || str[currIndex] == '-'))
        currIndex++;
    
    unsigned int ending = 0;
    while(currIndex + ending < str.size() && str[currIndex + ending] >= '0' && str[currIndex + ending] <= '9')
        ending++;
    
    for(unsigned int i = 0; i < ending; i++) {
        if(INT_MAX < result + (int) (str[currIndex + ending - 1 - i] - '0') * pow(10, i)) {
            if(positiveVal) return INT_MAX;
            else return INT_MIN;
        }
           
        result = result + (int) (str[currIndex + ending - 1 - i] - '0') * pow(10, i);
    }
    
    if(!positiveVal)
        result = result * -1;
    
    return result;
};

int SolutionAtoi::runTestCases() {
    std::cout << "Selecting String to Int - atoi Problem...\n";
    std::cout << "Going to run test cases:\n\n";

    std::cout << "atoi of: " << testCase_1 << " is expected: " << solution_1 << " | Result is: " << myAtoi(testCase_1) << std::endl;
    std::cout << "atoi of: " << testCase_2 << " is expected: " << solution_2 << " | Result is: " << myAtoi(testCase_2) << std::endl;
    std::cout << "atoi of: " << testCase_3 << " is expected: " << solution_3 << " | Result is: " << myAtoi(testCase_3) << std::endl;
    std::cout << "atoi of: " << testCase_4 << " is expected: " << solution_4 << " | Result is: " << myAtoi(testCase_4) << std::endl;
    std::cout << "atoi of: " << testCase_5 << " is expected: " << solution_5 << " | Result is: " << myAtoi(testCase_5) << std::endl;
    std::cout << "atoi of: " << testCase_6 << " is expected: " << solution_6 << " | Result is: " << myAtoi(testCase_6) << std::endl;
 
    return 0;
}