class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0; 
        int minus = INT_MAX, a = 0;
        bool zero = false;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                int t = matrix[i][j];
                sum += abs(t);
                minus = min(minus, abs(t));
                if(t < 0) a++;
            }
        }
        if(a%2) return sum-minus*2;
        return sum;
    }
};