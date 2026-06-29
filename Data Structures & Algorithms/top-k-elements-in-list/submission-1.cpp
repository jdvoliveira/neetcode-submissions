class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> most_freq;
        unordered_map<int, int> nums_freq;

        for (const int& n : nums) {
            nums_freq[n]++;
        }

        vector<pair<int, int>> pairs;
        for (const auto& p : nums_freq) {
            pairs.push_back({p.second, p.first});
        }
        sort(pairs.rbegin(), pairs.rend());

        for (int i = 0; i < k; i++) {
            most_freq.push_back(pairs[i].second);
        }

        return most_freq;
    }
};
