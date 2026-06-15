class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int ans = 0;
        unordered_set<char> us;
        for (int r = 0; r < s.size(); r++) {

            while (us.contains(s[r])) {
                us.erase(s[l]);
                l++;
            }

            us.insert(s[r]);

            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
