class Solution {
public:
    int check(vector<int>& nums,int x,int y){
        if (nums[x]<y)return 0;
        return 1;
    }
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (check(nums,mid,target)==0){
                lo=mid+1;
            }
            else {
                ans=mid;
                hi=mid-1;
            }
        }
        return (ans!=-1)?ans:n;
    }
};