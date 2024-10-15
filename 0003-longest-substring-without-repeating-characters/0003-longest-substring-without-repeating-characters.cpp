class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;  
        int s1 = 0; 
        int max1 = 0;  
        int st = 0; 

        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) != m.end() && m[s[i]] >= st) {
                st = m[s[i]] + 1;
            }
            m[s[i]] = i;
            s1 = i - st + 1;
            max1 = max(s1, max1);
        }

        return max1;
    }
};