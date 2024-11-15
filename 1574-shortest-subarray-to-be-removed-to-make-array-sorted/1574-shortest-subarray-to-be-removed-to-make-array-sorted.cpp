class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        while(r > 0 && arr[r - 1] <= arr[r])r--;
        int a = r;
        while(l < r && (l == 0 || arr[l - 1] <= arr[l]))
        {
            while(r < n && arr[l] > arr[r])r++;
            a = min(a, r - l - 1);
            l++;
        }
        return a;
    }
};