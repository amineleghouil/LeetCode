class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        int i = 1;
        if(num<0){
            i=-1;
            num=-num;
        }
        string s="";
        while(num!=0){
            s = char('0' + (num % 7)) + s;
            num /= 7;
        }
        if(i==-1) s = "-" + s;
        return s;
    }
};
