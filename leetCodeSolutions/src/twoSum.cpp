// Found in https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> haveSeenIt;
        for(int i = 0; i < nums.size(); i++) {
            if(haveSeenIt.find(target - nums[i]) != haveSeenIt.end()) {
                res.push_back(haveSeenIt[target - nums[i]]);
                res.push_back(i);
                return res;
            }
            haveSeenIt.insert(pair<int, int>(nums[i], i));
        }
        return res;
    }
};