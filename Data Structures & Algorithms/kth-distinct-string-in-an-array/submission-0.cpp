class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> strFreq;
        for (const string& s : arr) {
            strFreq[s]++;
        }

        for (const string& s : arr) {
            if (strFreq[s] > 1) continue;
            k--;
            if (k == 0) {
                return s;
            }
        }

        return "";
    }
};