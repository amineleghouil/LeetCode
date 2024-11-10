class Solution {
public:
    void uf(vector<int>& b, int n, int v) {
        for (int i = 0; i < 32; ++i)
            if (n & (1 << i))
                b[i] += v;
    }

    int gn(vector<int>& b) {
        int n = 0;
        for (int i = 0; i < 32; ++i) {
            if (b[i] > 0)
                n |= (1 << i);
        }
        return n;
    }

    int minimumSubarrayLength(vector<int>& nums, int k) {
        if (k == 0)
            return 1;

        int n = nums.size();
        int s = INT_MAX;
        int l = 0, r = 0;
        int c = 0;
        vector<int> b(32);

        while (r < n) {
            uf(b, nums[r], 1);
            c |= nums[r];
            
            while (l <= r && c >= k) {
                s = min(s, r - l + 1);
                uf(b, nums[l], -1);
                c = gn(b);
                l++;
            }
            r++;
        }
        return s == INT_MAX ? -1 : s;
    }
};
