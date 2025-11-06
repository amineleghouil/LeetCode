class Solution {
public:
    int reverseBits(int n) {
        int b = 32, sum = 0;
        for (int i = 0; i < b; i++) {
            int l = n & 1;
            sum = sum << 1 | l;
            n >>= 1;
        }
        return sum;
    }
};