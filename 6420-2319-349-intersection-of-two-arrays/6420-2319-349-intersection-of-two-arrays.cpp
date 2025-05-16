class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> v,v1{nums1[0]},v2{nums2[0]};
        for(int i=1;i<nums1.size();i++){
            if(nums1[i]==v1[v1.size()-1])continue;
            v1.push_back(nums1[i]);
        }
        for(int i=1;i<nums2.size();i++){
            if(nums2[i]==v2[v2.size()-1])continue;
            v2.push_back(nums2[i]);
        }
        for(int i=0;i<v1.size();++i){
            for(int j=0;j<v2.size();++j){
                if(v1[i]==v2[j]){
                    v.push_back(v1[i]);
                    break;
                }
            }
        }
        return v;
    }
};