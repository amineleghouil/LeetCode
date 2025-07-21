class Solution {
public:
    string makeFancyString(string s) {
        string s1;
        for(int i=0;i<s.size();++i){
            if (i>=2 and s[i]==s[i-1] and s[i]==s[i-2])continue;
            s1.push_back(s[i]);
        }
        return s1;
    }
};