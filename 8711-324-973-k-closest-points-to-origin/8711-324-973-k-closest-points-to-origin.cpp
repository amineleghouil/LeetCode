class Solution {
public:
    struct CompareSecond {
        bool operator()(const pair<int, double>& a, const pair<int, double>& b) const {
            return a.second > b.second; 
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, double>, vector<pair<int, double>>, CompareSecond> pq;

        for (int i = 0; i < points.size(); ++i) {
            double dist = sqrt((points[i][0] * points[i][0] )+ (points[i][1] * points[i][1]));
            pq.push({i, dist});
        }

        vector<vector<int>> v;
        while (k--) {
            v.push_back(points[pq.top().first]);
            pq.pop();
        }

        return v;
    }
};
