class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(auto & a : nums)q.push(a);
        k--;
        while(k--)q.pop();
        return q.top();
    }
};