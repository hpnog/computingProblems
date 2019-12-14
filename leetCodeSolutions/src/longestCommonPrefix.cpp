// Found in https://leetcode.com/problems/longest-common-prefix/
//
// Time Complexity:     O(n) - where n is the number of characters of all the strings in the given vector
// Space Complexity:    O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        
        if(strs.size() == 0)
            return result;
        
        for(int i = 0; i < strs[0].size(); i++) {
            for(int j = 1; j < strs.size(); j++) {
                if(strs[j][i] != strs[0][i])
                    return result;
            }
            result += strs[0][i];
        }
        return result;
    }
};