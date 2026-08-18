class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        int ans=0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            bool leftOk = (mid==0 || nums[mid]>nums[mid-1]); //greater than elements on the left
            bool rightOk = (mid==n-1 || nums[mid]>nums[mid+1]); // on the right
            if (leftOk && rightOk){
                ans=mid;
                break;
            }
            else{
                if (mid+1<n && nums[mid]>nums[mid+1]){
                    hi=mid-1;
                }
                else lo=mid+1;
            }
        }
        return ans;
    }
};