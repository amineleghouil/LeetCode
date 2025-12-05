class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0; 
        int total = 0;
        for(int i: nums) total+=i;
        int curr = 0;
        for(int i = 0 ; i<nums.size()-1; i++){
            curr += nums[i];
            if((total-2*curr)%2==0) count++;
        }
        return count;
    }
};