class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<=2)
        return s;
        int n=s.size();
        string s1="";
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+1] && s[i]==s[i+2]){
                continue;
            }
            else{
                s1.push_back(s[i]);
            }
        }
        s1.push_back(s[n-2]);
        s1.push_back(s[n-1]);
        return s1;
    }
};