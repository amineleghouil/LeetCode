class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int &a : nums) m[a]++;
        int mx=0;
        for(auto &a : m){
            if(m.count(a.first - 1))
                mx = max(m[a.first] + m[a.first - 1], mx);
            if(m.count(a.first + 1))
                mx = max(m[a.first] + m[a.first + 1], mx);
        }
        return mx;
    }
};
