class Solution {
public:
    long long minEnd(int n, int x) {
        long long a = x;
        if (n == 1)
            return a;
        n--;
        vector<int> r;
        for (long long i = 0; i < 64; i++) {
            if (!(a & (1ll << i)))
                r.push_back(i);
        }
        for (int i = 0; n; i++, n >>= 1) {
            a += (n & 1ll) << r[i];
        }

        return a;
    }
};