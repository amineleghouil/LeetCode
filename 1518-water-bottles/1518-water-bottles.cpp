class Solution {
public:
    int numWaterBottles(int n, int k) {
        return n+(n-1)/(k-1);
    }
};
