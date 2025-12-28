class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int row=0;
        int col=n-1;
        int count=0;
        while(row<m && col>=0){
            if(grid[row][col]<0){
                count+=(m-row);
                col--;
            }
            else row++;
        }
        return count;
    }
};