class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i=0;
        string s="";
        while (i<s1.size() || i<s2.size()){
            if(i<s1.size())
            s+=s1[i];
            if(i<s2.size())
            s+=s2[i];
            i++;
        }
        return s;
    }
};