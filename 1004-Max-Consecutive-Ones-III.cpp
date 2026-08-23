class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int head=-1;
        int tail=0;
        int ans=0;
        int cnt=0;
        while(tail<n){
            while(head+1<n && (nums[head+1]==1 || cnt<k)){
                head++;
               if (nums[head]==0)cnt++;
            }
            ans=max(ans,head-tail+1);
            if ( nums[tail]==0)cnt--;
            tail++;

        }
        return ans;
    }
};