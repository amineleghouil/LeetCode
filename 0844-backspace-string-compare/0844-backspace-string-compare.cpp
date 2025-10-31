class Solution {
public:
    string exchange(string &s){
        string ans ="";
        for (char & c : s){
            if(c!='#')ans.push_back(c);
            else if(ans.size())ans.pop_back();
        }
        return ans ;
    }
    bool backspaceCompare(string s, string t) {
        return exchange(s)==exchange(t);

    }
};