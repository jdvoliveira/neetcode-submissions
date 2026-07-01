class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> nCount;
        for (const int& n : nums) {
            nCount[n]++;
            if (nCount[n] > nums.size() / 2.0) {
                return n;
            }
        }
        return 0;
    }
};