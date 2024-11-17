class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        deque<pair<int, long long>> dq;
        long long sum = 0;
        int s = INT_MAX;
        
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            if (sum >= k) {
                s = min(s, i + 1);
            }
            while (!dq.empty() && (sum - dq.front().second >= k)) {
                s = min(s, i - dq.front().first);
                dq.pop_front();
            }
            while (!dq.empty() && dq.back().second >= sum) {
                dq.pop_back();
            }
            dq.push_back({i, sum});
        }
        return s == INT_MAX ? -1 : s;
    }
};