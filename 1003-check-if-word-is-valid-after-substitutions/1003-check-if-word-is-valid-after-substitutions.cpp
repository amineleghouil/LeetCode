class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        for (int i = 0 ; i<s.size()-1; i++) st.push(s[i]);
       
        while (!st.empty()){
            if(st.top()=='c'){
                st.pop();
                if(!st.empty() && st.top()=='b'){
                    st.pop();
                    if(st.size()>1 && st.top()=='a'){
                        return true;
                    }else continue ;

                }else continue ;
            }
            st.pop();
        }
        return false ;
    }
};