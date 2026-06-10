class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> um;
        int left = 0;
        int maxLength = 0;
        int maxFreq = 0;

        for (int right = 0; right < s.size(); right++) {
            um[s[right]]++;
            maxFreq = max(maxFreq,um[s[right]]);

            if ((right - left + 1) - maxFreq > k) {
                um[s[left]]--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
