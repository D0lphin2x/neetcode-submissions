class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us;
        int ans = 0;
        for (int i : nums) {
            us.insert(i);
        }
        for (int i : nums) {
            if (us.find(i-1) == us.end()) {
                int count = 1;
                while (us.find(i + 1) != us.end()) {
                    i++;
                    count++;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};
