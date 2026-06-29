class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int prod;
        bool contains_zero = false;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            prod = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    prod *= nums[j];
                }
            }
            cout << prod << "\n";           
            res.push_back(prod);
        }
        
        /*for (const int& n : nums) {
            if (n == 0) {
                contains_zero = true;
                continue;
            }
            prod *= n;
        }

        for (const int& n : nums) {
              if (n == 0) {
                res.push_back(prod);
            }
            else if (contains_zero) {
                res.push_back(0);
            }
            else {
                res.push_back(prod / n);
            }
        }*/
        
        return res;
    }
};