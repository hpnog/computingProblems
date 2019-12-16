// Found in https://leetcode.com/problems/zigzag-conversion/
//
// Time Complexity:     O(n)
// Space Complexity:    O(n)
//

class Solution {
public:
    string convert(string s, int numRows) {
        int zigZagReps = numRows > 1 ? ceil(s.size() / (2.0f * numRows - 2)) : s.size();
        int repSize = numRows > 1 ? 2 * numRows - 2 : 1;
        string result;
        
        for(int line = 0; line < numRows; line++) {
            for(int i = 0; i < zigZagReps && result.size() < s.size(); i++) {
                int lineBase = repSize * i;

                if((lineBase + line) < s.size())
                    result += s[lineBase + line];
                
                int lineSpecific = lineBase + repSize - line;
                if(line > 0 && line < (numRows - 1) && lineSpecific < s.size()) {
                    result += s[lineSpecific];
                }
            }
        }
        return result;
    }
};