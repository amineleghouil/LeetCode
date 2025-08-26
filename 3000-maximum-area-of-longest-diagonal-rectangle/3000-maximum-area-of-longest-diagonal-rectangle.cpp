class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxi = -1.0;
        int res = 0;
        
        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0], b = dimensions[i][1];
            double d = sqrt(l * 1.0 * l + b * 1.0 * b);
            
            if (d > maxi) {
                maxi = d;
                res = l * b;
            } else if (d == maxi) {
                res = max(res, l * b);
            }
        }
        
        return res;
    }
};