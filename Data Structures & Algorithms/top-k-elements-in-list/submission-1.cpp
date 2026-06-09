class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // make an unordered map and insert everything,
        int number = k;
        vector<int> ans;
        unordered_map<int, int> um;
        for (int i : nums) {
            um[i]++;
        }
        for (int i = nums.size(); i >= 0; i--) {
            for (auto& [c, v] : um) {
                if (v == i) {
                    ans.push_back(c);
                    number --;
                }
                if (number == 0) return ans;
            }
        }
        return ans;
    }
};
