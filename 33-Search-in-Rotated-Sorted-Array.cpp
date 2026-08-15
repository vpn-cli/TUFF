class Solution {
public:
    int check(vector<int>&nums, int y){
        if (nums[y]<nums[0])return 1; // or nums[y]>nums[nums.size()-1] return 0;else return 1;
        return 0;
    }
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int lo=0;
        int hi=n-1;
        int k=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (check(nums,mid)==0)lo=mid+1;
            else{
                k=mid;
                hi=mid-1;
            }
        }
        if (target>nums[n-1]){ // target is in the left side
             lo=0;
             hi=k-1;
        }
        else{
             lo=k;
             hi=n-1;
        }
        int ans=-1;
        while(lo<=hi){
                int mid = lo+(hi-lo)/2;
                if (target>nums[mid]){
                    lo=mid+1;
                }
                else {
                    ans=mid;
                    hi=mid-1;
                }
            }
        if (ans<n && ans>=0 && nums[ans]==target)return ans;
        else return -1;
    }
};