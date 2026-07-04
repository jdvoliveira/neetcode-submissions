class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> charFreq;
        for (const char& c : text) {
            charFreq[c]++;
        }

        unordered_map<char, int> balloon = {{'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1}};

        int res = text.length();
        for (const auto& [c, f] : balloon) {
            res = min(res, charFreq[c] / f);
        }

        return res;
    }
};