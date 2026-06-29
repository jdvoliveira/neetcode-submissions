class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string encoded = "";

        for (const string& s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        if (s == "") {
            return {};
        }

        vector<string> res;
        int i = 0;
        while (i < s.length())  {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            res.push_back(s.substr(j + 1, len));
            cout << "i: " << i << ", j: " << j << ", len: " << len << " -> " << s.substr(j + 1, len) << "\n";
            i = j + 1 + len;
        }

        return res;
    }
};
