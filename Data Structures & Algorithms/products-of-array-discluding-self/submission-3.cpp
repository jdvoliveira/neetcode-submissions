class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int prod;

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
        
        return res;
    }
};