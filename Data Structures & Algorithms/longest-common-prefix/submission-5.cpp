class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            cout << "i: " << i << "\n";
            cout << "comparing: " << prefix << " with " << strs[i] << ", loop it: " << min(prefix.length(), strs[i].length()) << "\n";
            if (strs[i] == "") return "";
            int j;
            for (j = 0; j < min(prefix.length(), strs[i].length()); j++) {
                if (prefix[j] != strs[i][j]) {
                    break;
                }
            }
            prefix = prefix.substr(0, j);
            cout << prefix << "\n";
        }
        return prefix;
    }
};