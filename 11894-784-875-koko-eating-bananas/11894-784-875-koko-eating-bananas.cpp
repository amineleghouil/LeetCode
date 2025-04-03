class Solution {
public:
    long long spendHour(vector<int>& v, int mid) {
        long long s = 0;
        for (int i = 0; i < v.size(); ++i) s += ceil((double)v[i] / mid);
        return s;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        int l = 1, r = *max_element(v.begin(), v.end());
        while (l <= r) {
            int mid = (r - l) / 2 + l;
            if (spendHour(v, mid) > h) l = mid + 1;
            else r = mid - 1; 
        }
        return l;
    }
};