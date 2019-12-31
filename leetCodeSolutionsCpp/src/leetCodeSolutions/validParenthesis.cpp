#include "validParenthesis.h"

#include <stack>

bool SolutionValidParenthesis::isValid(std::string s) {
    if(s.size() % 2 > 0)
        return false;
    
    const char bracketMap[] = {'{', '(', '[', '}', ')', ']'};
    std::stack<char> openParenthesis;
    
    for(char val : s) {
        uint parIndex = 0;
        for(;parIndex < 3;parIndex++)
            if(val == bracketMap[parIndex]) {
                openParenthesis.push(val);
                break;      
            }
        if(parIndex == 3) {
            for(uint i = 0; i < 3; i++) {
                if(val == bracketMap[i + 3]) {
                    if(openParenthesis.size() <= 0 || bracketMap[i] != openParenthesis.top())
                        return false;
                    else {
                        openParenthesis.pop();
                        break;
                    }
                } else if(i == 2) {
                    return false;
                }
            }
        }
    }
    if(openParenthesis.size() > 0)
        return false;
    return true;
};

int SolutionValidParenthesis::runTestCases() {
    std::string testCase_1 = "){";
    bool solution_1 = false;

    std::string testCase_2 = "()[()()({})]{}";
    int solution_2 = true;

    std::string testCase_3 = "((((()))){{[]}((((((((((((((]]]";
    bool solution_3 = false;

    std::string testCase_4 = "())";
    bool solution_4 = false;

    std::cout << "Selecting Valid Parenthesis Probem...\n";
    std::cout << "Going to run test cases:\n\n";

    std::cout << "Valid Parenthesis Solution of: " << testCase_1 << " is expected: " << solution_1 << " | Result is: " << isValid(testCase_1) << std::endl;
    std::cout << "Valid Parenthesis Solution of: " << testCase_2 << " is expected: " << solution_2 << " | Result is: " << isValid(testCase_2) << std::endl;
    std::cout << "Valid Parenthesis Solution of: " << testCase_3 << " is expected: " << solution_3 << " | Result is: " << isValid(testCase_3) << std::endl;
    std::cout << "Valid Parenthesis Solution of: " << testCase_4 << " is expected: " << solution_4 << " | Result is: " << isValid(testCase_4) << std::endl;
 
    return 0;
}