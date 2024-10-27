class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<vector<int>> mx(m+1,vector<int>(n+1,0));
        int sq=0;
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                if(matrix[i-1][j-1]==1){
                    mx[i][j] = 1 + min({mx[i-1][j], mx[i][j-1], mx[i-1][j-1]});
                    sq += mx[i][j];
                }
            }
        }
        return sq;
    }
};