class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size());

        for (int i = 0; i < nums1.size(); i++) {
            int eq = -1, nextG = -1;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    eq = j;
                }
                if (eq != -1 && nums2[j] > nums1[i]) {
                    nextG = nums2[j];
                    break;
                }
            }
            res[i] = nextG;
        }

        return res;
    }
};