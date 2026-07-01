class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> charFreq;
        for (const char& c : s) {
            charFreq[c]++;
        }
        
        int maxOdd = INT_MIN, minEven = INT_MAX;
        for (const auto& [c, f] : charFreq) {
            if ((f % 2 == 0) && (minEven > f)) {
                minEven = f;
            }
            else if ((f % 2 != 0) && (maxOdd < f)) {
                maxOdd = f;
            }
        }

        return maxOdd - minEven;
    }
};