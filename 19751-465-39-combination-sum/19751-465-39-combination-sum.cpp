class Solution {
public:
    void backtrack(int v,vector<int>& c, int t,vector<int>& a,vector<vector<int>>& res,int &s){
        if(s>t){
            return;
        }
        if(s==t){
            res.push_back(a);
            return;
        }
        for(int i =v;i<c.size();i++){
            a.push_back(c[i]);
            backtrack(i,c,t,a,res,s+=c[i]);
            s-=a[a.size()-1];
            a.pop_back();
            
        }

    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> res;vector<int> a;int s=0;
        backtrack(0,c,t,a,res,s);
        return res;
    }
};