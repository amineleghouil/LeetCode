class Solution {
public:
    bool isp(int x, vector<int>& q, int n) {
        double s=0;
        for (double a : q)
            s+=ceil(a/x);
        return s>n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l=1,r=100000;
        while (l<r) {
            int m = (l+r)/2;
            if (isp(m,quantities,n))
                l=m+1;
            else
                r = m;
        }
        return l;
    }
};