class Solution {
public:
    int sum1(int n) {
        int s = 0;  
        while(n != 0) {
            int r = (n % 10); 
            s += r * r;
            n /= 10;  
        }
    return s;
    }
    bool isHappy(int n) {
        int s = sum1(n);
        int f = sum1(s);
        while((s!=f)&& f!=1){
            s = sum1(s);
            f = sum1(sum1(f));
        }
        return f==1;
    }
};