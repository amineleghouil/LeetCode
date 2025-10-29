class Solution {
public:
    int minKBitFlips(vector<int>& v, int k) {
        queue<int> li;
        int n = v.size();
        int ans = 0;
        for(int i = 0 ; i < n ; ++i){
            while(!li.empty() && li.front() < i)li.pop();
            int flips = li.size();
            if ((v[i]&&!(flips&1)) || (!v[i]&&(flips&1)))continue ;
            if(i+k>n)return -1;
            ans++;
            li.push(i+k-1);
        }
        return ans;
    }
};