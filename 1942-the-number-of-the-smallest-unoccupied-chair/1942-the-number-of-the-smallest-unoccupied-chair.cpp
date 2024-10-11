class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int a = times[targetFriend][0];
        for (int i = 0; i < times.size(); ++i) {
            times[i].push_back(i);
        }

        std::sort(times.begin(), times.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[0] < b[0];  
        });

        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < times.size(); ++i) {
            pq.push(i);  
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq1;

        for (const auto& time : times) {
            int arrival = time[0];
            int departure = time[1];
            int friendIndex = time[2];
            while (!pq1.empty() && pq1.top().first <= arrival) {
                pq.push(pq1.top().second);
                pq1.pop();
            }
            int assignedChair = pq.top();
            pq.pop();

            
            if (friendIndex == targetFriend) {
                return assignedChair;
            }

            pq1.push({departure, assignedChair});
        }

        return -1;  
    }
};
