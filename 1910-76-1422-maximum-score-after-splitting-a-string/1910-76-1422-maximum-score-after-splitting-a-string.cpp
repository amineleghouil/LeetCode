class Solution {
public:
    int maxScore(string s) {
        int mx = 0;
        for (int i = 1; i < s.size(); i++) { 
            int s0 = 0, s1 = 0;
            for (int x = 0; x < i; x++) if (s[x] == '0') s0++;
            for (int x = i; x < s.size(); x++) if (s[x] == '1') s1++;
            mx = max(mx, s0 + s1);
        }
        return mx;
    }
};
