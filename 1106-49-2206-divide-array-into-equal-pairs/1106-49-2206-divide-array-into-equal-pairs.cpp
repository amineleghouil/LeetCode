class Solution {
public:
    static bool divideArray(vector<int>& nums) {
        bitset<501> parity=0;
        for(int x: nums) parity.flip(x);
        return parity.none();
    }
};