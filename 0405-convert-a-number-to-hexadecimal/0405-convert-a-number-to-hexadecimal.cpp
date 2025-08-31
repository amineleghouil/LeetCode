class Solution {
public:
    string toHex(int number) {
        string ans = "";
        unsigned int num = number;
        
        if(num == 0)
        return "0";

        while(num){
            int rem = num%16;
            if(rem == 10 || rem == 11 || rem == 12 || rem == 13 || rem == 14 || rem == 15){
                char ch = rem + 87;
                ans += ch;
            }
            else{
                char ch = rem + '0';
                ans += ch;
            }
            num /= 16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};