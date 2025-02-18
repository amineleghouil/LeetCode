class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();
        for(int i=0;i< n;++i)for(int j=i+1;j<n;j++)swap(m[i][j],m[j][i]);
        for(int i=0;i< n;++i)for(int j=0;j<n/2;j++)swap(m[i][j],m[i][n-1-j]);
    }
};