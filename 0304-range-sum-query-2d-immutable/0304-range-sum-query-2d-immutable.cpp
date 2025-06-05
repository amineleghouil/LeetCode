class NumMatrix {
public:
    vector<vector<int>> m;
    NumMatrix(vector<vector<int>>& v) {
        int n=v.size(),m1=v[0].size();
        m.clear();
        m.resize(n);
        for (int i=0;i<n;++i)m[i].resize(m1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m1;j++){
                m[i][j]=v[i][j];
                if(i)m[i][j]+=m[i-1][j];
                if(j)m[i][j]+=m[i][j-1];
                if(i && j)m[i][j]-=m[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int x1, int y1, int x2, int y2) {
        int res = m[x2][y2];
        if(x1)res-=m[x1-1][y2];
        if(y1)res-=m[x2][y1-1];
        if(x1 && y1)res+=m[x1-1][y1-1];
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */