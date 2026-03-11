class Solution {
public:
    int bitwiseComplement(int n) {
        return (n==0)?1:n^(bit_floor((unsigned)n*2)-1);
    }
};