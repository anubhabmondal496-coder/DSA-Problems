
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        string sum = "";

        while (i >= 0 || j >= 0) {
            int x = (i >= 0) ? a[i] - '0' : 0;
            int y = (j >= 0) ? b[j] - '0' : 0;

            int total = x + y + carry;

            int bit = total % 2;
            carry = total / 2;

            sum.push_back(bit + '0');

            i--;
            j--;
        }

        if (carry == 1) {
            sum.push_back('1');
        }

        reverse(sum.begin(), sum.end());

        return sum;
    }
};
