#include <iostream>

#include "palindromeNumber.h"

bool SolutionPalindromeNumber::isPalindrome(int x) {
    if(x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int revertedNumber = 0;
    while(x > revertedNumber) {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;
    }
 
    return x == revertedNumber || x == revertedNumber/10;
}
 
// /**
//  * @brief First thought of solution for this problem, however, it implies the need to convert the given number into a string
//  * 
//  * @param x 
//  * @return true 
//  * @return false 
//  */
// bool isPalindrome(int x) {
//     if(x < 0)
//         return false;
//     string xString = to_string(x);
//     string xReverse;
//     for(int i = xString.size() - 1; i >= 0; i--) {
//         xReverse += xString[i];
//     }
//     return xReverse == xString;
// }

int SolutionPalindromeNumber::runTestCases() {
    std::cout << "Going to run test cases:\n\n";

    int testCase_1 = 121;
    bool solution_1 = true;
    std::cout << "Palindrome Number of: " << testCase_1 
        << " is expected: " << solution_1 << " Result is: " 
        << isPalindrome(testCase_1) << std::endl;
    
    int testCase_2 = -121;
    bool solution_2 = false;
    std::cout << "Palindrome Number of: " << testCase_2 
        << " is expected: " << solution_2 << " Result is: " 
        << isPalindrome(testCase_2) << std::endl;

    int testCase_3 = 10;
    bool solution_3 = false;
    std::cout << "Palindrome Number of: " << testCase_3 
        << " is expected: " << solution_3 << " Result is: " 
        << isPalindrome(testCase_3) << std::endl;
    
    return 0;
}