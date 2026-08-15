class Solution {
public:
    bool check(vector<int>& nums, int y) {
        return nums[y]<nums[0];
    }
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int ans=hi+1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (check(nums,mid)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
    if (ans>=0 && ans<n)return nums[ans];
    return nums[0];
    }
};