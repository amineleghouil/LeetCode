class Solution {
public:
    bool judgeSquareSum(int c) {
        int a=0,b=sqrt(c);
        while(a<=b){
            if((pow(a,2)+pow(b,2))<c){
                a++;
                continue;
            }
            else if((pow(a,2)+pow(b,2))>c){
                b--;
                continue;
            }
            return true;
        }
        return false;

    }
};