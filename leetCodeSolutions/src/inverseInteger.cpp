// Found in https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        
        while(x != 0) {
            int popVal = x % 10;
            x /= 10;
            
            // Checks for overFlow on the next phase of the cycle
            if((result > INT_MAX / 10 || (result == INT_MAX / 10 && popVal > INT_MAX % 10)) ||
                (result < INT_MIN / 10 || (result == INT_MIN / 10 && popVal < INT_MIN % 10)))
                return 0;
            
            result = result * 10 + popVal;
        }
        return result;
    };
};

/**
 * First Solution - Not the most optimized
 */

//class Solution {
//public:
//    int reverse(int x) {
//        if(hasOverFlowed(x))
//            return 0;
//      
//        int digits[] = {0,0,0,0,0,0,0,0,0,0};
//        for(int i = 0; i < 10; i++) {
//            int denom = pow(10, i);
//            int digit = (abs(x) / denom) % 10;
//            digits[9 - i] = digit;
//        }
//        
//        int result = 0;
//        int decimal = 0;
//        
//        for(int i = 0; i < 10; i++) {
//            if(decimal == 0 && digits[i] == 0)
//                continue;
//            result += digits[i] * pow(10, decimal);
//            decimal++;
//        }
//        
//        if(hasOverFlowed(result))
//            return 0;
//        if(x < 0) return -result;
//        return result;
//    };
//    
//    bool hasOverFlowed(int val) {
//        if(val >= INT_MAX || val <= INT_MIN)
//            return true;
//        return false;
//    }
//};