class Solution {
public:
    int check(vector<int>& nums, int x) {
        return int(nums[x] <= nums[nums.size() - 1]);
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        int k = 0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(nums, mid) == 0) {
                lo = mid + 1;

            } else {
                k = mid;
                hi = mid - 1;
            }
        }
        if (target > nums[n - 1]) {
            lo = 0;
            hi = k - 1;
        } else {
            lo = k;
            hi = n - 1;
        }
        int ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                ans = mid;
                hi = mid - 1;
            }
        }
        return (ans >= 0 && ans < n && nums[ans] == target) ? ans : -1;
    }
};