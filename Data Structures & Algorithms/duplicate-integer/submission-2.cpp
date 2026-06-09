class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numberSet;
        for (int i = 0; i < nums.size(); i++) {
            if (numberSet.contains(nums[i])) return true;
            numberSet.insert(nums[i]);
        }
        return false;
    }
};