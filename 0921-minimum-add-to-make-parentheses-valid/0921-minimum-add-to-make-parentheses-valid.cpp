class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0,cl=0;
        for (char c:s){
            if(c=='(')
            o++;
            else {
                if(o)
                o--;
                else 
                cl++;
            }
        }
        return cl+o;
    }
};
