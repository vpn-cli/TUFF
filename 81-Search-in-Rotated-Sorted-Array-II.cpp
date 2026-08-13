class Solution {
public:
// contains duplicates so we cant use check function. as nums[mid] == nums[lo]== nums[hi] ( can be )
    bool search(vector<int>& nums, int target) {  
        int n = nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if (nums[mid]==target)return true;

            if (nums[lo]==nums[mid] && nums[hi]==nums[mid]){ // omitting the case where these three are equal
                lo++;
                hi--;
            }
          else  if (nums[lo]<=nums[mid]){   // if it exists in the left side 
                if (nums[lo]<=target && target<nums[mid]){
                    hi=mid-1;
                }
                else lo=mid+1;
            }
            else{                         // if it exits in the right side
                if (nums[mid]<target && target<=nums[hi]){ 
                    lo=mid+1;
                }
                else hi=mid-1;
            }

        }
    return false;
    }
};