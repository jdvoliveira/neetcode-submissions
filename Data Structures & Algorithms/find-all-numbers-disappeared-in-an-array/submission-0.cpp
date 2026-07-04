class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, bool> numsPresent;
        for (int i = 1; i <= n; i++) {
            numsPresent[i] = false;
        }

        for (int i = 0; i < n; i++) {
            numsPresent[nums[i]] = true;
        }

        vector<int> res;
        for(const auto& [n, p] : numsPresent) {
            if (!p) {
                res.push_back(n);
            }
        }
        
        return res;
    }
};