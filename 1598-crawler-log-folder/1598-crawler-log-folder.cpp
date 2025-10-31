class Solution {
public:
    int minOperations(vector<string>& v) {
        stack <string> st ;
        int n = v.size();
        for (int i =0;i<n;i++){
            if(!st.empty() && v[i]=="../"){
                st.pop();
            }else if(v[i]=="./" || v[i]=="../"){continue;}
            else {st.push(v[i]);}
        }
        return st.size();
    }
};