class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            cout << "i: " << i << "\n";
            cout << "comparing: " << prefix << " with " << strs[i] << ", loop it: " << min(prefix.length(), strs[i].length()) << "\n";
            //if (strs[i] == "") return "";
            int j = 0;
            while (j < min(prefix.length(), strs[i].length())) {
                if (prefix[j] != strs[i][j]) {
                    break;
                }
                j++;
            }
            prefix = prefix.substr(0, j);
            cout << prefix << "\n";
        }
        return prefix;
    }
};