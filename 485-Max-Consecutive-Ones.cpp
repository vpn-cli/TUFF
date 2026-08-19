class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int actualmax = 0-1;
        int temp=0;
        for (int num : nums) {
            if (num == 1)
                temp++;
            else {
                temp = 0;
            }
            actualmax = max(actualmax, temp);
        }
        return actualmax;
    }
};