class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num ==0 || num == 1){
            return true;
        }
        int l = 1 , r=num;
        while(l<=r){
            int mid = (r-l)/2+l;
            long long sq =(long long) mid * mid ;
            if(sq==num)return true;
            else if (sq>num) r= mid -1;
            else l=mid+1;
        }
        return false;
    }
};