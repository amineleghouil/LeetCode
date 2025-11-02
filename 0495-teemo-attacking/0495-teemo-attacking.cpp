class Solution {
public:
    int findPoisonedDuration(vector<int>& v, int d) {
        int ans = 0;
        for(int i =0;i<v.size()-1;++i){
            if(v[i+1]-v[i]<d)ans += (v[i+1]-v[i]);
            else ans += d;
        }
        return ans+d;
    }
};