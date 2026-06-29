class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;

        for (int i = nums.size(); i < nums.size() * 2; i++) {
            ans.push_back(nums[i - nums.size()]);
        }

        return ans;
    }
};