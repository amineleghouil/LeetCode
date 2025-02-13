class Solution {
public:
    int findMaxLength(vector<int>& v) {
        unordered_map<int,int> m;
        m[0]=-1;
        int res=0;
        for(int i=0;i<v.size();i++){
            if(!v[i])v[i]=-1;
            if(i)v[i]+=v[i-1];
            if(m.find(v[i])==m.end())m[v[i]]=i;
            else res=max(res,i-m[v[i]]);
        }
        return res;
        
    }
};