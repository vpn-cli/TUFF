class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if (nums[i]==val){
                nums[i]=INT_MAX;
            }
        }
        int removed = 0;
        for(int i=0;i<n;i++){
            if (nums[i]==INT_MAX) removed++;
        }
        int remaining = n-removed;
        sort(nums.begin(),nums.end());

        for(int i=0;i<removed;i++){
            nums.pop_back();
        }
        return remaining;

    }
};