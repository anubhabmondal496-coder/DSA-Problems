class Solution {
public:
    int divide(int dividend, int divisor) {

        // Special overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine the sign of the answer
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Use long long so INT_MIN can be safely negated
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long quotient = 0;

        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            // Find the largest power-of-2 multiple of divisor
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            // Subtract that multiple
            a -= temp;

            // Add its corresponding quotient value
            quotient += multiple;
        }

        if (negative)
            quotient = -quotient;

        return (int)quotient;
    }
};