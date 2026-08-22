class Solution {
public:
    bool check(vector<int>& piles, int x, int h) { 
        long long needed = 0;
        int n = piles.size();
        for(int i=0;i<n;i++){
            if (piles[i]<x){
                needed++;
            }
            else{
                needed += ((piles[i]+x-1)/x);
            }
        }
        if (needed>h)return false;
        return true;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int lo = 1;
        int hi = 0;
        for (int i = 0; i < n; i++) {
            hi = max(hi, piles[i]);
        }
        int ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(piles, mid, h)) {
                ans = mid;
                hi = mid - 1;
            } else
                lo = mid + 1;
        }
        return ans;
    }
};