class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numberMap;
        int want;
        for (int i = 0; i < nums.size(); i++) {
            want = target - nums[i];
            if (numberMap.contains(want)) {
                return {numberMap[want],i};
            }
            numberMap.insert({nums[i],i});
        }
        return {0,0};
    }
};
