class Solution {
public:
    int clumsy(int n) {
        int op = 0;
        stack <int> st ;
        st.push(n);
        for(int i = n-1 ; i>0;--i){
            if(op==0)st.top()*=i;
            if(op==1)st.top()/=i;
            if(op==2)st.push(i);
            if(op==3)st.push((-1)*i);
            op=(op+1)%4;
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans ;
    }
};