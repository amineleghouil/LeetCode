class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if(m*n != r*c) return mat;

        vector<vector<int>> res(r , vector<int>(c));

        int row{},col{};

        for(int i{}; i < m; ++i){
            for(int j{}; j < n; ++j){
                res[row][col] = mat[i][j];
                ++col;
                if(col == c){
                    col = 0;
                    ++row;
                }
            }
        }
        
        return res;
    }
};