class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> store;

        for (int i = 1; i <= n; i++) {
            store.insert(i);
        }

        for (int i = 0; i < n; i++) {
            store.erase(nums[i]);
        }

        vector<int> res(store.begin(), store.end());
        return res;
    }
};