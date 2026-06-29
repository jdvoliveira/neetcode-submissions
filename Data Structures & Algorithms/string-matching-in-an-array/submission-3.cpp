class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        size_t n = words.size();
        vector<string> res;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                cout << words[i] << " inside " << words[j] << "?\n";
                if (words[j].find(words[i]) != string::npos) {
                    cout << "found: " << words[i] << " within " << words[j] << "\n";
                    if (find(res.begin(), res.end(), words[i]) == res.end()) {
                        cout << "not there yet\n";
                        res.push_back(words[i]);
                    }
                }
            }
        }
        return res;
    }
};