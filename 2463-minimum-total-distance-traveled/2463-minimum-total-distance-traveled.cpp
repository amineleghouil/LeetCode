class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        int n = robot.size(), p = factory.size();
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        long long d[101][101][101];
        long long inf = 1e15;
        memset(d, inf, sizeof(d));
        for(int i=0; i<n; i++){
            for(int j=0; j<p; j++){
                int xR=robot[i], xF=factory[j][0], cap=factory[j][1];
                long long nottake = (j==0) ? inf : d[i][j-1][0];
                d[i][j][cap] = nottake;
                for(int k=0; k<cap; k++){
                    long long take = (i==0) ? abs(xR-xF) : abs(xR-xF) + d[i-1][j][k+1];
                    d[i][j][k] = min(take, nottake);
                }

            }
        }
        return d[n-1][p-1][0];
    }
};