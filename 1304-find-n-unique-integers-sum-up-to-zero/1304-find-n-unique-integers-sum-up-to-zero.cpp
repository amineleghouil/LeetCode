class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        int k = 1;

        for (int i = 0; i < n / 2; i++) {
            arr[i] = k;
            arr[n - 1 - i] = -k;
            k++;
        }
        return arr;
    }
};