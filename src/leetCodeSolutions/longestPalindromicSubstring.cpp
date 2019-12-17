// Found in https://leetcode.com/problems/longest-palindromic-substring/
//
// Time Complexity:     O(n^2) - As expanding from the center may take O(n)
// Space Complexity:    O(1)
//

class SolutionLongestPalindromeSubstring {
public:
    pair<short, short> expandFromTheCenter(string &s, short i) {
        short left, right;
        if(i % 2 == 0) {
            left = (i / 2) - 1;
            right = (i / 2);
        } else {
            left = (i / 2);
            right = (i / 2);  
        }
        
        while(left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        
        left++;
        right--;
        
        if(right < left)
            return make_pair(0, 0);
        
        return make_pair(left, right - left + 1);
    }
        
    string longestPalindrome(string s) {
        pair<short, short> limits {0, 0};
        
        for(short i = 0; i < 2 * s.size(); i += 2) {
            pair<short, short> pair = expandFromTheCenter(s, i);
            if(pair.second > limits.second) {
                limits = pair;
            }
            pair = expandFromTheCenter(s, i + 1);
            if(pair.second > limits.second) {
                limits = pair;
            }
        }
        return s.substr(limits.first, limits.second);
    }
};