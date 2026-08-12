class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int, int> mp;
        int ans = 0;
        int n = nums.size();
        int l = 0;
        int r = -1;
        while (l < n) {
            if (r + 1 < n and mp[nums[r + 1]] < k) {
                // temp++;

                r++;
                mp[nums[r]]++;
                ans = max(ans, r - l + 1);
            } else {
                mp[nums[l]]--;
                l++;
            }
        }
        return ans;
    }
};