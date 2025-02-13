class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < nums.size(); ++i) {
            pq.push(nums[i]);
        }
        int s = 0;
        while (pq.size() >= 2 && pq.top() < k) {
            long long a = pq.top(); pq.pop();
            long long b = pq.top(); pq.pop();
            pq.push(min(a, b) * 2 + max(a, b));
            s++;
        }
        return s;
    }
};
