class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int left = 0, right = 0;
            for (int l = 0; l < i; l++) {
                left += nums[l];
            }
            for (int r = i + 1; r < n; r++) {
                right += nums[r];
            }
            if (left == right) {
                return i;
            }
        }
        return -1;
    }
};