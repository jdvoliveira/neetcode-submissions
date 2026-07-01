class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        vector<int> localbed;
        localbed.push_back(0);
        localbed.insert(localbed.begin() + 1, flowerbed.begin(), flowerbed.end());
        localbed.push_back(0);
        for (int i = 1; i < localbed.size() - 1; i++) {
            if (localbed[i] == 1 || localbed[i-1] == 1 || localbed[i+1] == 1){
                continue;
            }
            localbed[i] = 1;
            count++;
        }
        return count >= n;
    }
};