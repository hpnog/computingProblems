// Found in https://leetcode.com/problems/roman-to-integer/
//
// Time Complexity:     O(n)
// Space Complexity:    O(1)

class Solution {
public:
    
    unordered_map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

     int romanToInt(string s) {
        int result = 0;
         if(s.size() > 0)
             result = romanNumerals[s.back()];
        for(int i = s.size() - 2; i >= 0; i--) {
            const int currVal = romanNumerals[s[i]];
            
            if(romanNumerals[s[i + 1]] > currVal)
                result -=  currVal;
            else
                result += currVal;
        }
        return result;
    }    
};