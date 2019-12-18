#include "longestSubstringWithoutRepeatingCharacters.h"

int SolutionLongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(std::string s) {
    int currentRecord = 0;
    int currCounter = 0;
    std::unordered_map<char, int> lastFoundPosition;
    int lastReset = -1;
    for(unsigned int i = 0; i < s.size(); i++) 
    {
        const char val = s[i];
        
        if (lastFoundPosition.find(val) == lastFoundPosition.end() || 
            lastFoundPosition.size() == 0 || 
            lastReset > lastFoundPosition.find(val)->second)
        {   
            currCounter++;
        } else 
        {
            currentRecord = std::max(currCounter, currentRecord);
            currCounter = i - lastFoundPosition[val];
            lastReset = lastFoundPosition[val];
        } 
        lastFoundPosition[val] = i;
    }
    currentRecord = std::max(currCounter, currentRecord);
    return currentRecord;
} 

int SolutionLongestSubstringWithoutRepeatingCharacters::runTestCases() {
    std::cout << "Going to run test cases:\n\n";

    std::string testCase_1 = "abcabcbb";
    int solution_1 = 3;
    std::cout << "Longest Substring Without Repeating Characters of: " << testCase_1 
        << " is expected: " << solution_1 << " Result is: " 
        << lengthOfLongestSubstring(testCase_1) << std::endl;
    
    std::string testCase_2 = "bbbbb";
    int solution_2 = 1;
    std::cout << "Longest Substring Without Repeating Characters of: " << testCase_2 
        << " is expected: " << solution_2 << " Result is: " 
        << lengthOfLongestSubstring(testCase_2) << std::endl;

    std::string testCase_3 = "pwwkew";
    int solution_3 = 3;
    std::cout << "Longest Substring Without Repeating Characters of: " << testCase_3 
        << " is expected: " << solution_3 << " Result is: " 
        << lengthOfLongestSubstring(testCase_3) << std::endl;
    
    return 0;
}