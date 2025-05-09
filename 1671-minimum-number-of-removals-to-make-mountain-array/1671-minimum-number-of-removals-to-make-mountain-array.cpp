class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
         int n = nums.size();

        vector<int> l(n,1);
        vector<int> r(n,1);

        int res = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){

                if(nums[i] > nums[j]) l[i] = max(l[i],l[j]+1);
            }
        }

        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){

                if(nums[i] > nums[j]) r[i] = max(r[i],r[j]+1);
            }
        }

        for(int i=1;i<n;i++){
            if(l[i] > 1 && r[i] > 1){
                res = max(res,l[i]+r[i] -1);
            }
        }

        return n - res;
    }
};