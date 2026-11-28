class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int t = 0;
        int sz = flowerbed.size();

        while (t < sz && n > 0) {
            bool leftEmpty = (t == 0) || (flowerbed[t - 1] == 0);
            bool rightEmpty = (t == sz - 1) || (flowerbed[t + 1] == 0);

            if (flowerbed[t] == 0 && leftEmpty && rightEmpty) {
                n--;
                t += 2;
            } else {
                t++;
            }
        }
        return n == 0;
    }
};