class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int maxi = -1;
        int r = k - 1;
        map<int, int> mp;
        while (r < n) {
            set<int> seen;
            for (int i = l; i <= r; i++) {
                seen.insert(nums[i]);
            }
            for (int x : seen) {
                mp[x]++;
            }
            l++;
            r++;
        }
        for (auto it : mp) {
            if (it.second == 1)
                maxi = max(maxi, it.first);
        }
        return maxi;
    }
};