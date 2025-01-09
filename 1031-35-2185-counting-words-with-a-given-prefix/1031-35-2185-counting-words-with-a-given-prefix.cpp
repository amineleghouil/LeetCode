class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int s=0,n1=words.size(),n2=pref.size();
        for(int i=0;i<n1;i++){
            if (n2>words[i].size())continue;
            int j;
            for(j=0;j<n2;j++)if(pref[j]!=words[i][j])break;
            if(j==n2)s++;
        }
        return s;
    }
};