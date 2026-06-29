class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> num_index;

        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << "\n";
            int diff = target - nums[i];
            if (num_index.find(diff) != num_index.end()) {
                return {num_index[diff], i};
            }
            num_index.insert({nums[i] ,i});
        }

        return {};
    }
};
