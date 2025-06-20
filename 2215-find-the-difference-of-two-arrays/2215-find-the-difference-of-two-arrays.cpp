class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v(2);
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        for(int i=0;i<nums1.size();i++)m1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)m2[nums2[i]]++;
        for(int i=0;i<nums1.size();i++)if(m2[nums1[i]]==0 && m1[nums1[i]] > 0)v[0].push_back(nums1[i]), m1[nums1[i]] = -1;
        for(int i=0;i<nums2.size();i++)if(m1[nums2[i]]==0 && m2[nums2[i]] > 0)v[1].push_back(nums2[i]), m2[nums2[i]] = -1;
        return v;
    }
};
