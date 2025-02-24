class Solution {
public:
    int trap(vector<int>& h) {
        int a=0,b=0;
        int n=h.size();
        vector<int> l(n),r(n);
        for(int i=0;i<n;i++){
            l[i]=a;
            r[n-1-i]=b;
            a=max(a,h[i]);
            b=max(b,h[n-1-i]);
        }
        int s=0;
        for(int i=0;i<n;i++){
            s+=max(0,min(l[i],r[i])-h[i]);
        }
        return s;
    }
};