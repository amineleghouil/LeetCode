class Solution {
public:
    int countDays(int days, vector<vector<int>>& vec) {
        sort(vec.begin(), vec.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0]; 
        });

        int s = 0, maxi = vec[0][1];

        for (int i = 1; i < vec.size(); ++i) {
            if (vec[i][0] > maxi + 1) {
                s += vec[i][0] - (maxi + 1);
            }
            maxi = max(maxi, vec[i][1]);
        }

        return s + (days - maxi) + (vec[0][0] - 1);
    }
};
