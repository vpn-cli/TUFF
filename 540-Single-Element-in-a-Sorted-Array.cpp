class Solution {
public:
    int check(vector<int>&nums, int mid){
            if (mid+1>=nums.size())return 1;
            if (mid%2==0){
                if (nums[mid]==nums[mid+1])return 0;
            }
            else if (mid%2!=0) {
                if (nums[mid]!=nums[mid+1])return 0;
            }
            else return 1;
        
        return 1;
    }
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int ans=hi+1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (check(nums,mid)){
                ans =mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }

        }
        cout<<ans;
        return nums[ans];

    }
};