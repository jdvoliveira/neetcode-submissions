class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> groups;
        
        for (const string& str : strs) {
            cout << str << "\n";
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& [sorted, group] : groups) {
            result.push_back(group);
        }


        return result;
    }
};
