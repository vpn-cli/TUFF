class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        int tail=0;
        int head=-1;
        int ans=0;
        while(tail<n){
            while(head+1<n && (mp[nums[head+1]]<k)){
                head++;
                mp[nums[head]]++;
            }
            ans=max(ans,head-tail+1);
            if (tail<=head){
                mp[nums[tail]]--;
                tail++;
            }
            else{
                tail++;
                head=tail-1;
            }
        }
        return ans;
    }
};