#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("O3", "unroll-loops")
#pragma GCC optimize ("-ffloat-store")

auto init = []() { 
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
} ();
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
         int s = 0;
        for(int i = 0; i < 24; i++) {
            int x = 1 << i; 
            int cnt = 0; 
            for(int c : candidates) {
                if (c & x) 
                    ++cnt; 
            }
            s = max(s, cnt);
        }
        return s;
    }
};