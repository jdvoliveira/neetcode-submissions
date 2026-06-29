class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zero_count = 0;

        for (const int& n : nums) {
            if (n == 0) {
                zero_count++;
                continue;
            }
            prod *= n;
        }

        if (zero_count > 1) {
            return vector<int>(nums.size(), 0);
        }

        vector<int> res;
        for (const int& n : nums) {
            if (zero_count > 0) {
                res.push_back(n == 0 ? prod : 0);
            }
            else {
                res.push_back(prod / n);
            }
        }

        return res;
    }
};