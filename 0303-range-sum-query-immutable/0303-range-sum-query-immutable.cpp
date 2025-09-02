class NumArray {
    vector<int> prefixSum;

public:
    NumArray(vector<int>& nums) {

        prefixSum.push_back(nums[0]); 

        for (int num : nums) {
            prefixSum.push_back(prefixSum.back() + num);
        }
    }

    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};