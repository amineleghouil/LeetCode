class Solution {
public:
    struct compare {
        bool operator()(pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first) {
                return a.second > b.second;
            }
            return a.first > b.first;
        }
    };

    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }
        while (k--) {
            auto Y = pq.top();
            pq.pop();
            pq.push({Y.first * multiplier, Y.second});
        }
        while (!pq.empty()) {
            auto to = pq.top();
            pq.pop();
            nums[to.second] = to.first;
        }
        return nums;
    }
};