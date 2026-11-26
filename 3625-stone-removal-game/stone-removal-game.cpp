class Solution {
public:
    bool canAliceWin(int n) {
        if((n > 9 && n < 19) || (n > 26 && n < 34) || (n > 39 && n < 45) || (n > 48 && n < 52)) return true;
        return false;
    }
};