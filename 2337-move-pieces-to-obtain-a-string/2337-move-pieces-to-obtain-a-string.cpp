class Solution {
public:
    bool canChange(string s, string t) {
        int j=0,a=t.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='_')continue;
            while (t[j]=='_' && j<a )j++;
            if(j==a || t[j]!=s[i] || (s[i]=='L' && j>i) || (s[i]=='R' && j<i)) return false;
            j++;
        }
        while (t[j]=='_' && j<a )j++;
        return j==a;
    }
};