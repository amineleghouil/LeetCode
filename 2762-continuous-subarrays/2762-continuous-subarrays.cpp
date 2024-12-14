class Solution {
public:
    #define ll long long
    long long continuousSubarrays(vector<int>& nums) {
        ll cnt = 0;
        int l = 0, r = 0;
        priority_queue<pair<int, int>> pq1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq2;
        
        while (r < nums.size()) {
            pq1.push({nums[r], r});
            pq2.push({nums[r], r});

            while (!pq1.empty() && !pq2.empty() && (pq1.top().first - pq2.top().first) > 2) {
                l++;
                while (!pq1.empty() && pq1.top().second < l) pq1.pop();
                while (!pq2.empty() && pq2.top().second < l) pq2.pop();
            }

            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }
};