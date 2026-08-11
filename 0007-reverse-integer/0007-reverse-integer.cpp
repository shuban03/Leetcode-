class Solution {
public:
    int reverse(int x) {
        long long rev = 0;   // To temporarily store reversed number

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            rev = (rev * 10) + digit;

            // If rev goes beyond range of 32-bit signed integer
            if(rev<INT_MIN || rev>INT_MAX){
                return 0;
            }
        }

        return rev;
    }
};