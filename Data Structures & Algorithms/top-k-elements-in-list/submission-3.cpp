class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // max heap approach, bucket sort
        unordered_map<int,int> um;
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> ans;
        int count = k;
        for (int i : nums) {
            um[i]++;
        }
        for (auto& [c,v]: um) {
            bucket[v].push_back(c);
        }
        for (int i = nums.size(); i >= 0; i--) {
            if (!bucket[i].empty()) {
                for (int i : bucket[i]) {
                    ans.push_back(i);
                    count--;
                    if (count == 0) return ans;
                }
            }
        }
        return ans;
    }
};
