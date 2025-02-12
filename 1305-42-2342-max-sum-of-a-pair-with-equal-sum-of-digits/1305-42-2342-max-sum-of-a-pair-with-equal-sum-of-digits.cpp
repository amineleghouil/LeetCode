class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, priority_queue<int>> m;
        for(int a : nums){
            int s=0,n=a;
            while(n){
                s+=n%10;
                n/=10;
            }
            m[s].push(a);
        }
        int res = -1;
        for(auto &a:m){
            if(a.second.size()>1){
                int b=a.second.top();
                a.second.pop();
                b+=a.second.top();
                res=max(b,res);
            }
        }
        return res;
    }
};