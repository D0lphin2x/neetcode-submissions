class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numberMap;
        int want;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            want = target - nums[i];
            if (numberMap.contains(want)) {
                ans = {numberMap[want],i};
                return ans;
            }
            numberMap.insert({nums[i],i});
        }
        return {0,0};
    }
};
