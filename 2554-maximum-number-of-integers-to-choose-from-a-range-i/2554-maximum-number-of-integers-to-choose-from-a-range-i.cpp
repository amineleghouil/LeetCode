class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        unordered_map<int,int> m;
        for(int i=0;i<banned.size();++i){
            if(banned[i]>n)break;
            m[banned[i]]++;
        } 
        int s=0,j=0;
        for(int i=1;i<=n;++i){
            if(m[i]>=1)continue;
            if(s+i>maxSum)break;
            s=s+i;
            j++;
        }
        return j;
    }
};