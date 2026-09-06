class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int nn) {
        int n = flowerbed.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (flowerbed[i] == 0) {
                bool leftwala = (i == 0 || flowerbed[i - 1] == 0);
                bool rightwala = (i == n - 1 || flowerbed[i + 1] == 0);
                if (leftwala && rightwala) {
                    cnt++;
                    flowerbed[i] = 1;
                }
            }
        }
        return cnt >= nn;
    }
};