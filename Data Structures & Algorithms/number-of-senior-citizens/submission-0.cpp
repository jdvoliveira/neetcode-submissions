class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorCount = 0;
        for (const string& p : details) {
            int age = stoi(p.substr(11, 2));
            if (age > 60) {
                seniorCount++;
            }
        }
        return seniorCount;
    }
};