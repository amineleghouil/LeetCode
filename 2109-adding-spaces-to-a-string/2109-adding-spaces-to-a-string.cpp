class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string a="";
        int j=0;
        int i;
        for(i=0;i<s.size() && j<spaces.size();i++)
        {
            if(i==spaces[j])
            {
                a.push_back(' ');
                j++;
            }
            a.push_back(s[i]);
        }    
        for(;i<s.size();i++)
        {
            a.push_back(s[i]);
        }
        return a;
    }
};