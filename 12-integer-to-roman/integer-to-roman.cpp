class Solution {
public:
    string intToRoman(int num) {
        int temp = num;
        int power = 1;
        vector<int> digits;
        while(temp > 0){
            int rem = temp % 10;
            temp/= 10;
            int digit = rem * power;
            power *= 10;
            digits.push_back(digit);
        }
        sort(digits.begin(),digits.end());
        vector<pair<int, string>> roman = {
            {1000, "M"},
            {900,  "CM"},
            {500,  "D"},
            {400,  "CD"},
            {100,  "C"},
            {90,   "XC"},
            {50,   "L"},
            {40,   "XL"},
            {10,   "X"},
            {9,    "IX"},
            {5,    "V"},
            {4,    "IV"},
            {1,    "I"}
        };
        string ans = "";
        for(auto &p : roman){
            while(num >= p.first){
                ans += p.second;
                num -= p.first;
            }
        }
        return ans;
    }
};