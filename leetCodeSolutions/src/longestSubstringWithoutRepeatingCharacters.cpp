// Found in https://leetcode.com/problems/longest-substring-without-repeating-characters/

// Time Complexity:     O(n)
// Space Complexity:    O(1) - The size of the charset/alphabet limits the size of the unordered_map. 


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int currentRecord = 0;
        int currCounter = 0;
        unordered_map<char, int> lastFoundPosition;
        int lastReset = -1;
        for(int i = 0; i < s.size(); i++) 
        {
            const char val = s[i];
            
            if (lastFoundPosition.find(val) == lastFoundPosition.end() || 
                lastFoundPosition.size() == 0 || 
                lastReset > lastFoundPosition.find(val)->second)
            {   
                currCounter++;
            } else 
            {
                currentRecord = max(currCounter, currentRecord);
                currCounter = i - lastFoundPosition[val];
                lastReset = lastFoundPosition[val];
            } 
            lastFoundPosition[val] = i;
        }
        currentRecord = max(currCounter, currentRecord);
        return currentRecord;
    } 
};
