class Solution {
public:
    void backtrack(vector<string> &v,string &a,int op,int cl,int n){
        if(a.size()==2*n){
            v.push_back(a);return ;
        }
        if(op<n){
            a.push_back('(');
            backtrack(v,a,op+1,cl,n);
            a.pop_back();
        }
        if (cl<op){
            a.push_back(')');
            backtrack(v,a,op,cl+1,n);
            a.pop_back();
        }

    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string a; 
        backtrack(v,a,0,0,n);
        return v;
    }
};