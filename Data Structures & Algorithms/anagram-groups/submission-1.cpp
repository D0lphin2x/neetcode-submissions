class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groupMap;
        vector<vector<string>> ans;
        for (string s : strs) {
            vector<int> arr(26,0);
            for (char c : s) arr[c-'a']++;
            string key = "";
            for (int i = 0; i < 26; i++) {
                key+='#' + arr[i];
            }
            groupMap[key].push_back(s);
        }
        for (auto& [k,v] : groupMap) {
            ans.push_back(v);
        }
        return ans;
    }
};
