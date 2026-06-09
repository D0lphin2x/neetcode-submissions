class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> groupMap;
        vector<vector<string>> ans;
        for (string s : strs) {
            vector<int> arr(26);
            for (char c : s) {
                arr[c - 'a']++;
            }
            if (!groupMap.contains(arr)) {
                groupMap.insert({arr, vector<string>()});
            }
            groupMap[arr].push_back(s);
        }
        for (const auto& [k, v] : groupMap) {
            ans.push_back(v);
        }
        return ans;
    }
};
