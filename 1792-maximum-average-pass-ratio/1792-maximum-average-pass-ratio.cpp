class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        using p = pair<double, int>;
        priority_queue<p> pq;
        for (int i = 0; i < classes.size(); ++i) {
            double curr = (double)classes[i][0] / classes[i][1];
            double newPr = (double)(classes[i][0] + 1) / (classes[i][1] + 1);
            pq.push({newPr - curr, i});
        }


        while (extraStudents--) {
            auto it = pq.top();
            pq.pop();
            int i = it.second;
            classes[i][0] += 1;
            classes[i][1] += 1;
            double curr = (double)classes[i][0] / classes[i][1];
            double newPr = (double)(classes[i][0] + 1) / (classes[i][1] + 1);
            pq.push({newPr - curr, i});
        }

        double ans = 0.0;
        for (auto& it : classes) {
            ans += (double)it[0] / it[1];
        }

        return ans / classes.size();
    }
};