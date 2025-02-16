class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min1=200;
        int n=strs.size();
        for(int i=0;i<n;i++)min1=min(min1,(int)strs[i].size());
        string s="";
        for(int i=0;i<min1;i++){
            int j;
            for(j=1;j<n;j++){
                if(strs[j][i]!=strs[0][i])return s;
            }
            s.push_back(strs[0][i]);
        }
        return s;
        
    }
};