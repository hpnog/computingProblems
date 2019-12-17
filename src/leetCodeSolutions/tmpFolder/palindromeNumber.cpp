// Found in https://leetcode.com/problems/palindrome-number/

// Time Complexity:     O(log(n))
// Space Complexity:    O(1)

class SolutionPalindromeNumber {
public:
    bool isPalindrome(int x) {
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
};
