class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> m;
        for (int i = 0;i<s.size();i++)m[s[i]]=i;
        int s1=0;for (int i = 0;i<s.size();i++)s1+=abs(m[t[i]]-i);
        return s1;
    }
};