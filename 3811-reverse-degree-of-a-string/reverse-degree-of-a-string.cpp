class Solution {
public:
    int reverseDegree(string s) {
        int pdt = 0;
        for (int i = 0; s[i] != '\0'; i++){
            int s2 = (int)s[i] - 96;
            int s1 = 27 - s2;
            pdt = pdt + s1 * (i + 1);
        }
        return pdt;
    }
};