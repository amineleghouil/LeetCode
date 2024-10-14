class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();++i){
            pq.push(nums[i]);
        }
        long long s=0;
        while(k){
            int a=pq.top();
            s+=a;
            pq.pop();
            a=ceil((double)a/3);
            pq.push(a);
            k--;
        }
        return s;
        
    }
};