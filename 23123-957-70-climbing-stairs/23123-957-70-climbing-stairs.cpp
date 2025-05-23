class Solution {
public:
    vector<int> v;

    Solution() {
        v = vector<int>(46, 0);
        v[0] = 1;
        v[1] = 2;
    }

    int climbStairs(int n) {
        if (n <= 0) return 0;
        if (v[n-1] != 0) return v[n-1];
        v[n-1] = climbStairs(n-1) + climbStairs(n-2);
        return v[n-1];
    }
};