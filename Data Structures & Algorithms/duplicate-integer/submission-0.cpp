class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> count;

        for (int& num : nums) {
            std::cout << num << "\n";
            if (count.find(num) != count.end()) {
                return true;
            }
            else {
                count.insert(num);
            }
        }

        return false;
    }
};