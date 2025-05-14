class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, s = 0;
        vector<int> v(nums1.begin(), nums1.begin() + m); 

        while (i < m && j < n) {
            if (v[i] < nums2[j]) {
                nums1[s++] = v[i++];
            } else {
                nums1[s++] = nums2[j++];
            }
        }
        while (i < m) {
            nums1[s++] = v[i++];
        }

        while (j < n) {
            nums1[s++] = nums2[j++];
        }
    }
};
