#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> h(n, 0);
        int cnt = 0;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                h[j] = mat[i][j] ? h[j] + 1 : 0;
            }

            for(int j=0; j<n; j++) {
                int mn = h[j];
                for(int k=j; k>=0 && mn>0; k--) {
                    mn = min(mn, h[k]);
                    cnt += mn;
                }
            }
        }
        return cnt;
    }
};