class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 0;
        vector<int> ans;
        vector<int> left;
        left.push_back(1);
        vector<int> right;
        right.push_back(1);
        int lSum = 1;
        int rSum = 1;
        for (int i = 1; i < nums.size(); i++) {
            lSum = lSum * nums[i-1];
            left.push_back(lSum);
        }
        for (int j = nums.size()-2; j >= 0; j--) {
            rSum = rSum * nums[j+1];
            right.push_back(rSum);
        }
        int l = 0;
        int r = nums.size()-1;

        while (l < nums.size()) {
            ans.push_back(left[l] * right[r]);
            l++;
            r--;
        }
        return ans;
    }
};
