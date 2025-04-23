class Solution {
public:
    int sumd(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        int sz=(int)(log10(n))*9 +9 ;
        vector<int> sums(sz+1);
        for (int i = 1; i <= n; i++)
        sums[sumd(i)]++;
        
        int maxi = 0, count = 0;
        for (int i : sums) 
            if (i > maxi) maxi = i, count = 1;
            else if (i == maxi) ++count;
        
        return count;
    }
};