class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> appearences;
        for (int i = 1; i <= pow(n, 2); i++) {
            appearences[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                appearences[grid[i][j]]++;
            }
        }
        vector<int> res(2);
        for (const auto& [num, app] : appearences) {
            if (app == 2) res[0] = num;
            else if (app == 0) res[1] = num;
        }
        return res;
    }
};