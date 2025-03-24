class Solution {
public:
    int countDays(int days, vector<vector<int>>& vec) {
        if (vec.empty()) return days;

        sort(vec.begin(), vec.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0]; 
        });

        int s = 0, maxi = 0; 

        for (const auto& interval : vec) {
            int start = interval[0], end = interval[1];

            if (start > maxi + 1) {
                s += (start - (maxi + 1));
            }

            maxi = max(maxi, end);
        }

        s += (days - maxi);

        return s;
    }
};
