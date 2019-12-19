#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

#include "leetCodeSolutions/addTwoNumbers.h"
#include "leetCodeSolutions/inverseInteger.h"
#include "leetCodeSolutions/longestCommonPrefix.h"
#include "leetCodeSolutions/longestPalindromicSubstring.h"
#include "leetCodeSolutions/longestSubstringWithoutRepeatingCharacters.h"
#include "leetCodeSolutions/twoSum.h"

TEST_CASE( "Add Two Numbers Problem", "[single-file]" ) {
    SolutionAddTwoNumbers solutionAddTwoNumbers;

    ListNode * arg1 = solutionAddTwoNumbers.testAddTwoNumbersArg_1;
    ListNode * arg2 = solutionAddTwoNumbers.testAddTwoNumbersArg_2;
    
    ListNode * sol = solutionAddTwoNumbers.test_1_solution;
    ListNode * wrongSol = solutionAddTwoNumbers.test_1_solution;

    ListNode *  result_1 = solutionAddTwoNumbers.addTwoNumbers(arg1, arg2);

    // Right solution
    REQUIRE( sol->compare(result_1) );

    // Change solution making it wrong and comparing again
    wrongSol->val--;
    REQUIRE( !sol->compare(result_1) );
}

TEST_CASE( "Inverse Integer Problem", "[single-file]" ) {
    SolutionInverseInteger solutionInverseInteger;

    REQUIRE( solutionInverseInteger.reverse(123) == 321 );
    REQUIRE( solutionInverseInteger.reverse(-123) == -321 );
    REQUIRE( solutionInverseInteger.reverse(120) == 21 );
    REQUIRE( solutionInverseInteger.reverse(85264379) == 97346258 );
}

TEST_CASE( "Longest Common Prefix Problem", "[single-file]" ) {
    SolutionLongestCommonPrefix solutionLongestCommonPrefix;

    std::vector<std::string> testCase_1 = {"flower","flow","flight"};
    std::string solution_1 = "fl";
    std::vector<std::string> testCase_2 = {"dog","racecar","car"};
    std::string solution_2 = "";

    REQUIRE( solutionLongestCommonPrefix.longestCommonPrefix(testCase_1) == solution_1 );
    REQUIRE( solutionLongestCommonPrefix.longestCommonPrefix(testCase_2) == solution_2 );
}

TEST_CASE( "Longest Palindromic Substring Problem", "[single-file]" ) {
    SolutionLongestPalindromeSubstring solutionLongestPalindromeSubstring;

    std::string testCase_1 = "babad";
    std::string solution_1 = "bab";
    
    std::string testCase_2 = "cbbd";
    std::string solution_2 = "bb";

    REQUIRE( solutionLongestPalindromeSubstring.longestPalindrome(testCase_1) == solution_1 );
    REQUIRE( solutionLongestPalindromeSubstring.longestPalindrome(testCase_2) == solution_2 );
}


TEST_CASE( "Longest Substring Without Repeating Characters Problem", "[single-file]" ) {
    SolutionLongestSubstringWithoutRepeatingCharacters solutionLongestSubstringWithoutRepeatingCharacters;

    REQUIRE( solutionLongestSubstringWithoutRepeatingCharacters.lengthOfLongestSubstring("abcabcbb") == 3 );
    REQUIRE( solutionLongestSubstringWithoutRepeatingCharacters.lengthOfLongestSubstring("bbbbb") == 1 );
    REQUIRE( solutionLongestSubstringWithoutRepeatingCharacters.lengthOfLongestSubstring("pwwkew") == 3 );
}

TEST_CASE( "Two Sum Problem", "[single-file]" ) {
    SolutionTwoSum solutionTwoSum;

    std::vector<int> testCase_1 = {2, 7, 11, 15};
    int target_1 = 9;
    std::vector<int> solution_1 = {0, 1};

    REQUIRE( solutionTwoSum.twoSum(testCase_1, target_1) == solution_1 );
}