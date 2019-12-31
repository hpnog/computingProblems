#include "longestPalindromicSubstring.h"

std::pair<short, short> SolutionLongestPalindromeSubstring::expandFromTheCenter(std::string &s, short i) {
    short left, right;
    if(i % 2 == 0) {
        left = (i / 2) - 1;
        right = (i / 2);
    } else {
        left = (i / 2);
        right = (i / 2);  
    }
    
    while(left >= 0 && right < (short) s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    
    left++;
    right--;
    
    if(right < left)
        return std::make_pair(0, 0);
    
    return std::make_pair(left, right - left + 1);
};
    
std::string SolutionLongestPalindromeSubstring::longestPalindrome(std::string s) {
    std::pair<short, short> limits {0, 0};
    
    for(unsigned short i = 0; i < 2 * s.size(); i += 2) {
        std::pair<short, short> pair = expandFromTheCenter(s, i);
        if(pair.second > limits.second) {
            limits = pair;
        }
        pair = expandFromTheCenter(s, i + 1);
        if(pair.second > limits.second) {
            limits = pair;
        }
    }
    return s.substr(limits.first, limits.second);
};

int SolutionLongestPalindromeSubstring::runTestCases() {
    std::cout << "Going to run test cases:\n\n";

    std::string testCase_1 = "babad";
    std::string solution_1 = "bab";
    std::cout << "Longest Palindrome Substring of: " << testCase_1 
        << " is expected: \"" << solution_1 << "\" Result is: " 
        << longestPalindrome(testCase_1) << std::endl;
    
    std::string testCase_2 = "cbbd";
    std::string solution_2 = "bb";
    std::cout << "Longest Palindrome Substring of: " << testCase_2 
        << " is expected: \"" << solution_2 << "\" Result is: " 
        << longestPalindrome(testCase_2) << std::endl;
    
    return 0;
}