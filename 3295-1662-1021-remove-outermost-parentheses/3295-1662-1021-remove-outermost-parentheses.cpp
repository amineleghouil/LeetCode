class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        int i=0;
        string result="";
        while(i<s.size()){
            if(s[i]=='('){
                if(count>0){
                    result+=s[i];
                }
                count++;
            }
            else{
                count--;
                if(count>0){
                    result+=s[i];
                }
            }
            i++;
        }
        return result;
    }
};