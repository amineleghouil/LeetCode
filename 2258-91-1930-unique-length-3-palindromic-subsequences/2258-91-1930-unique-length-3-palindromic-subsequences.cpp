class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> R(26,0);
        for(auto &u : s)
        {
            R[u-'a']++;
        }
        vector<int> L(26, 0);
        
        unordered_set<int> S;
        
        for(int i = 0; i < s.length(); i++)
        {
            int t = s[i] - 'a';
            R[t]--;
            for(int j = 0; j < 26; j++)
            {
                if(L[j] > 0 && R[j] > 0)
                {
                    S.insert(26*t + j);
                }
            }
            L[t]++;
        }
        
        return S.size();
    }
};