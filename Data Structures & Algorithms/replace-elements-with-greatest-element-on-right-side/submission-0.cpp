class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        size_t n = arr.size();
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            int maxR = -1;
            for (int j = i+1; j < n; j++) {
                if (arr[j] > maxR) {
                    maxR = arr[j];
                }
            }
            res[i] = maxR;
        }

        return res;
    }
};