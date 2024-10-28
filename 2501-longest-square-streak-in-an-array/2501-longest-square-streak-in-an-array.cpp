class Solution {
public:
    bool binarySearch(vector<int>& arr, long long target, unordered_map<int, int>& m) {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                if (m.find(target) == m.end())
                    m[target]++;
                return true;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }

    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> m;
        int s = -1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (m[nums[i]])
                continue;
            int n = 1;
            long long f = (long long )nums[i] * nums[i];
            if (f > INT_MAX)
                continue;
            while (binarySearch(nums, f, m)) {
                n++;
                f *= f;
                if (f > INT_MAX) break;
            }
            s = max(s, n);
        }
        return s <= 1 ? -1 : s;
    }
};
