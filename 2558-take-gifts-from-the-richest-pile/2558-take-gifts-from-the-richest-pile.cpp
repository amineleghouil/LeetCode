class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        for (int i : gifts) {
            q.push(i);
        }
        while (k--) {
            int v = q.top();
            q.pop();
            q.push(sqrt(v));
        }
        long long a=0;
        while (!q.empty()){
            a+=q.top();
            q.pop();
        }
        return a;

    }
};