class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int zeros = 0;
        int ans = 0;
        for (int r = 0; r < n; r++) {    // init window
            if (nums[r] == 0) {
                zeros++;
            }
            while (zeros > k) {    // while the condition is invalid
                if (nums[l]==0){
                    zeros--;
                    l++;
                }
                else{
                    l++;
                }

            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};