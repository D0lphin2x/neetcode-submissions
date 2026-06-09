class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int sArr[26] = {};
        int tArr[26] = {};
        for (char c : s) sArr[c-'a']++;
        for (char c : t) tArr[c-'a']++;
        for (int i = 0; i < 26;i++) {
            if (sArr[i] != tArr[i]) return false;
        }
        return true;
    }
};
