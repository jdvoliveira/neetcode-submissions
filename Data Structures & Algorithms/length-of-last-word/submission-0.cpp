class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool space = false;

        if (s[s.length()-1] == ' ') {
            space = true;
        }

        for (int i = s.length() - 1; i >= 0; i--) {
            if (space) {
                if (s[i] == ' ') {
                    continue;
                }
                else {
                    space = false;
                }
            }
            if (s[i] != ' ') {
                count ++;
            }
            else break;
        }

        return count;
    }
};