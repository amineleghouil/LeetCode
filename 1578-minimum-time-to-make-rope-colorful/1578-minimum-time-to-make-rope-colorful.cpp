class Solution {
public:
    int minCost(string s, vector<int>& v) {
        int n=v.size();
        int t=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                t+=min(v[i],v[i-1]);
                v[i]=max(v[i],v[i-1]);
            }
        }
        return t;
    }
};