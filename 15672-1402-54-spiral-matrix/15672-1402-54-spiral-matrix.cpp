class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int n=matrix.size();
        int m=matrix[0].size();
        int t=0,l=0,r=m-1,d=n-1;

        while (v.size() < n * m) {
            for (int i =l; i<=r; i++)v.push_back(matrix[t][i]);
            for (int i =t+ 1;i<=d; i++)v.push_back(matrix[i][r]);
            if (t!=d)for (int i=r-1; i>=l; i--)v.push_back(matrix[d][i]);
            if (l!=r)for (int i =d-1;i>t; i--)v.push_back(matrix[i][l]);
            t++;l++;r--;d--;
        }
        return v;
    }
};