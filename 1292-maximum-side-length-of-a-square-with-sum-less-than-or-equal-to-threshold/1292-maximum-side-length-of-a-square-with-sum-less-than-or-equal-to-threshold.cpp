class Solution {
public:
    int maxSideLength(vector<vector<int>>& v, int t) {
        int n=v.size(),m=v[0].size();
        for (int i=0;i<n;i++){
            for(int j=1;j<m;j++)v[i][j]+=v[i][j-1];
        }
        for(int j=0;j<m;j++){
            for(int i=1;i<n;i++)v[i][j]+=v[i-1][j];
        }
        int ans=0,len=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int res =0 ;
                if(i+1>=len && j+1>=len){
                    int r=v[i][j];
                    if(i-len >=0)r-=v[i-len][j];
                    if(j-len >=0)r-=v[i][j-len];
                    if(i-len>=0 && j-len>=0)r+=v[i-len][j-len];
                    if(r<=t)res=len++;
                }
                ans = max(ans,res);
            }
            
        }
        return ans;
    }
};