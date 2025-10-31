class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="";
        for(char & c : s){
            if(!ans.empty() && ans[ans.size()-1]==c){
                ans.pop_back();
            }
            else {
                ans.push_back(c);
            }
        }
        return ans;
    }
};