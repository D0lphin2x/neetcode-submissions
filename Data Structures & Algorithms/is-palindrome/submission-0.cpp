class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while (i < j) {
            if (!isalnum(s.at(i))) {
                i++;
                continue;
            }
            if (!isalnum(s.at(j))) {
                j--;
                continue;
            }
            if (tolower(s.at(i)) != tolower(s.at(j))) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
