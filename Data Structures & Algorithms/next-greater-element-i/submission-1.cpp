class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        size_t n2 = nums2.size();
        vector<int> res;

        for (const int& num : nums1) {
            int nextG = -1;
            for (int i = n2 - 1; i >= 0; i--) {
                if (num == nums2[i]) break;
                if (nums2[i] > num) nextG = nums2[i];
            }
            res.push_back(nextG);
        }

        return res;
        
    }
};