class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        size_t n = arr.size();
        vector<int> res(n);
        int maxR = -1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] = maxR;
            maxR = max(maxR, arr[i]);
        }
        return res;
    }
};