class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int a=0,s=str2.size();
        for(char c :str1){
            if(a<s && ((c==str2[a]-1) || (c==str2[a]) || (c=='z' && str2[a]=='a')))
            a++;
        }
        return a==s;
    }
};