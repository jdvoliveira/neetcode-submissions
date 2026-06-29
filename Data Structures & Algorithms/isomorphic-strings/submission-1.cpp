class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> charMap;
        vector<char> values;
        for (int i = 0; i < s.length(); i++) {
            if (!charMap.contains(s[i])) {
                // need to check if the value is already attributed to a key, if so return false;
                if (find(values.begin(), values.end(), t[i]) != values.end()) {
                    return false;
                }
                values.push_back(t[i]);
                charMap[s[i]] = t[i];
            }
            else if(charMap[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};