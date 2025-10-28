class Solution {
public:
    int findTheWinner(int n, int k) {
        queue <int> q;
        for(int i=1;i<=n;++i)q.push(i);
        while(q.size()!=1){
            int j = 1;
            while(j<k){
                q.push(q.front());
                q.pop();
                ++j;
            }
            q.pop();
        }
        return q.front();
    }
};