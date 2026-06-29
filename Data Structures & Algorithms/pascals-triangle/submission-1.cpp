class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);

        res[0].push_back(1);
        for (int r = 1; r < numRows; r++) {
            vector<int> row(r+1);
            row[0] = row[r] = 1;
            for (int i = 1; i < r; i++) {
                row[i] = res[r-1][i-1] + res[r-1][i];
            }
            res[r] = row;
        }
        return res;
    }
};