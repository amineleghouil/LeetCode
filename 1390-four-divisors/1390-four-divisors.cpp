class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        for (int n : nums) {
            int val = sumOne(n);
            if (val != -1) res += val;
        }
        return res;
    }

    int sumOne(int n) {
        int p = round(cbrt(n));
        if ((long long)p * p * p == n && isPrime(p)) {
            return 1 + p + p*p + p*p*p;
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int a = i, b = n / i;
                if (a != b && isPrime(a) && isPrime(b)) {
                    return 1 + a + b + n;
                }
                return -1;
            }
        }
        return -1;
    }

    bool isPrime(int x) {
        if (x < 2) return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
        return true;
    }
};