class Solution {
public:
    bool check(vector<int>&arr, int y){
        return arr[y]>arr[y+1];
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo=0;
        int hi=n-1;
        int ans=hi+1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (check(arr,mid)){
                ans=mid;
                hi=mid-1;
            }
            else {
                lo=mid+1;
            }
        }
        if (ans<n)return ans;
        else return n-1;
    }
};