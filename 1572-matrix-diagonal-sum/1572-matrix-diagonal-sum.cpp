class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0,n=mat.size();
        for(int i=0;i<n;i++){
            i==(n-1-i)?s+=mat[i][i]:s+=mat[i][i]+mat[i][n-1-i];
        }
        return s;
    }
};