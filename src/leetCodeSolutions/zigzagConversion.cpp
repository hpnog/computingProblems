#include "zigzagConversion.h"


std::string SolutionZigZagConversion::convert(std::string s, int numRows) {
    int zigZagReps = numRows > 1 ? ceil(s.size() / (2.0f * numRows - 2)) : s.size();
    int repSize = numRows > 1 ? 2 * numRows - 2 : 1;
    std::string result;
    
    for(int line = 0; line < numRows; line++) {
        for(int i = 0; i < zigZagReps && result.size() < s.size(); i++) {
            int lineBase = repSize * i;

            if((lineBase + line) < s.size())
                result += s[lineBase + line];
            
            int lineSpecific = lineBase + repSize - line;
            if(line > 0 && line < (numRows - 1) && lineSpecific < s.size()) {
                result += s[lineSpecific];
            }
        }
    }
    return result;
};

int SolutionZigZagConversion::runTestCases() {
    std::cout << "Selecting Zig Zag Conversion Problem...\n";
    std::cout << "Going to run test cases:\n\n";

    std::string testCase_1 = "PAYPALISHIRING";
    int numRows_1 = 2;
    std::string solution_1 = "PAHNAPLSIIGYIR";

    std::string testCase_2 = "PAYPALISHIRING";
    int numRows_2 = 4;
    std::string solution_2 = "PINALSIGYAHRPI";
    
    std::cout << "Selecting Zig Zag Conversion Probem...\n";
    std::cout << "Going to run test cases:\n\n";

    std::cout << "Reverse of: " << testCase_2 << " is expected: " << solution_2 << " | Result is: " << convert(testCase_2, numRows_2) << std::endl;
 
    return 0;
}