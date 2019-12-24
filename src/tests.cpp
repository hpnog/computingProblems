#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

#include "leetCodeSolutions/addTwoNumbers.h"
#include "leetCodeSolutions/inverseInteger.h"
#include "leetCodeSolutions/longestCommonPrefix.h"
#include "leetCodeSolutions/longestPalindromicSubstring.h"
#include "leetCodeSolutions/longestSubstringWithoutRepeatingCharacters.h"
#include "leetCodeSolutions/twoSum.h"
#include "leetCodeSolutions/romanToInteger.h"
#include "leetCodeSolutions/palindromeNumber.h"
#include "leetCodeSolutions/zigzagConversion.h"
#include "leetCodeSolutions/validParenthesis.h"
#include "leetCodeSolutions/mergeTwoSortedLists.h"
#include "leetCodeSolutions/removeDuplicatesFromSortedArray.h"
#include "leetCodeSolutions/stringToInteger_atoi.h"

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

TEST_CASE( "Roman To Integer Problem", "[single-file]" ) {
    SolutionRomanToInteger solutionRomanToInteger;

    std::string testCase_1 = "III";
    int solution_1 = 3;
    
    std::string testCase_2 = "IV";
    int solution_2 = 4;
    
    std::string testCase_3 = "IX";
    int solution_3 = 9;
    
    std::string testCase_4 = "LVIII";
    int solution_4 = 58;
    
    std::string testCase_5 = "MCMXCIV";
    int solution_5 = 1994;
   
    REQUIRE( solutionRomanToInteger.romanToInt(testCase_1) == solution_1 );
    REQUIRE( solutionRomanToInteger.romanToInt(testCase_2) == solution_2 );
    REQUIRE( solutionRomanToInteger.romanToInt(testCase_3) == solution_3 );
    REQUIRE( solutionRomanToInteger.romanToInt(testCase_4) == solution_4 );
    REQUIRE( solutionRomanToInteger.romanToInt(testCase_5) == solution_5 );
}

TEST_CASE( "Palindrome Number Problem", "[single-file]" ) {
    SolutionPalindromeNumber solutionPalindromeNumber;
   
    REQUIRE( solutionPalindromeNumber.isPalindrome(121) == true );
    REQUIRE( solutionPalindromeNumber.isPalindrome(-121) == false );
    REQUIRE( solutionPalindromeNumber.isPalindrome(10) == false );
}

TEST_CASE( "ZigZag Conversion Problem", "[single-file]" ) {
    SolutionZigZagConversion solutionZigZagConversion;
   
    std::string testCase_1 = "PAYPALISHIRING";
    int numRows_1 = 3;
    std::string solution_1 = "PAHNAPLSIIGYIR";

    std::string testCase_2 = "PAYPALISHIRING";
    int numRows_2 = 4;
    std::string solution_2 = "PINALSIGYAHRPI";

    REQUIRE( solutionZigZagConversion.convert(testCase_1, numRows_1) == solution_1 );
    REQUIRE( solutionZigZagConversion.convert(testCase_2, numRows_2) == solution_2 );
}

TEST_CASE( "Valid Parenthesis Problem", "[single-file]" ) {
    SolutionValidParenthesis solutionValidParenthesis;
   
    std::string testCase_1 = "){";
    bool solution_1 = false;

    std::string testCase_2 = "()[()()({})]{}";
    bool solution_2 = true;

    std::string testCase_3 = "((((()))){{[]}((((((((((((((]]]";
    bool solution_3 = false;

    std::string testCase_4 = "())";
    bool solution_4 = false;

    REQUIRE( solutionValidParenthesis.isValid(testCase_1) == solution_1 );
    REQUIRE( solutionValidParenthesis.isValid(testCase_2) == solution_2 );
    REQUIRE( solutionValidParenthesis.isValid(testCase_3) == solution_3 );
    REQUIRE( solutionValidParenthesis.isValid(testCase_4) == solution_4 );
}

TEST_CASE( "Merge Two Sorted Lists Problem", "[single-file]" ) {
    SolutionMergeTwoSortedLists solutionMergeTwoSortedLists;

    ListNode * arg1 = solutionMergeTwoSortedLists.testMergeTwoSortedListsArg_1;
    ListNode * arg2 = solutionMergeTwoSortedLists.testMergeTwoSortedListsArg_2;
    
    ListNode * sol = solutionMergeTwoSortedLists.test_1_solution;
    ListNode * wrongSol = solutionMergeTwoSortedLists.test_1_solution;

    ListNode *  result_1 = solutionMergeTwoSortedLists.mergeTwoLists(arg1, arg2);

    // Right solution
    REQUIRE( sol->compare(result_1) );

    // Change solution making it wrong and comparing again
    wrongSol->val--;
    REQUIRE( !sol->compare(result_1) );
}

TEST_CASE( "Remove Duplicates From Sorted Array Problem", "[single-file]" ) {
    SolutionRemoveDuplicatesFromSortedArray solutionRemoveDuplicatesFromSortedArray;

    std::vector<int> arg1 = solutionRemoveDuplicatesFromSortedArray.testCase_1;
    std::vector<int> arg2 = solutionRemoveDuplicatesFromSortedArray.testCase_2;

    REQUIRE( solutionRemoveDuplicatesFromSortedArray.removeDuplicates(arg1) == solutionRemoveDuplicatesFromSortedArray.solution_1 );
    REQUIRE( solutionRemoveDuplicatesFromSortedArray.removeDuplicates(arg2) == solutionRemoveDuplicatesFromSortedArray.solution_2 );
}


TEST_CASE( "String to Integer - atoi Problem", "[single-file]" ) {
    SolutionAtoi solutionAtoi;

    REQUIRE( solutionAtoi.myAtoi(solutionAtoi.testCase_1) == solutionAtoi.solution_1 );
    REQUIRE( solutionAtoi.myAtoi(solutionAtoi.testCase_2) == solutionAtoi.solution_2 );
    REQUIRE( solutionAtoi.myAtoi(solutionAtoi.testCase_3) == solutionAtoi.solution_3 );
    REQUIRE( solutionAtoi.myAtoi(solutionAtoi.testCase_4) == solutionAtoi.solution_4 );
    REQUIRE( solutionAtoi.myAtoi(solutionAtoi.testCase_5) == solutionAtoi.solution_5 );
    REQUIRE( solutionAtoi.myAtoi(solutionAtoi.testCase_6) == solutionAtoi.solution_6 );
}