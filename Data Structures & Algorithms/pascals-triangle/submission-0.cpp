class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for (int r = 0; r < numRows; r++) {
            vector<int> row;
            row.push_back(1);
            for (int i = 1; i < r; i++) {
                row.push_back(res[r-1][i-1] + res[r-1][i]);
            }
            if (r > 0) {
                row.push_back(1);
            }
            res.push_back(row);
        }

        return res;
    }
}; 