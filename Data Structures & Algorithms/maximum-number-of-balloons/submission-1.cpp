class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char ,int> actualFreq;
        for (const char& c : text) {
            actualFreq[c]++;
        }

        if (!(actualFreq.contains('b') && actualFreq.contains('a') && actualFreq.contains('l') && actualFreq.contains('o') && actualFreq.contains('n'))) {
            return 0;
        }

        int res = INT_MAX;
        for(const auto& [c, f] : actualFreq) {
            if (c == 'b' || c == 'a' || c == 'n') res = min(res, f);
            else if (c == 'l' || c == 'o') res = min(res, f/2);
        }

        return res;
    }
};