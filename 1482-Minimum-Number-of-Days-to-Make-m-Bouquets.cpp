class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k, int x) {
        int n = bloomDay.size();
        // int bloomed = 0;
        // int total=0;
        int counter = 0;
        // int l = 0;
        // int r = 0;
        int score = 0;
    for(int i=0;i<n;i++){
        if (bloomDay[i]<=x){
            score++;
            if (score==k){
                counter++;
                score=0;
                if (counter==m)return true;
            }
        }
        else{
            score=0;
        }
    }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // if ( > n)
            // return -1;

        int lo = 1;
        int hi = -1;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            hi = max(bloomDay[i], hi);
        }
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(bloomDay, m, k, mid)) {
                ans = mid;
                hi = mid - 1;
            } else
                lo = mid + 1;
        }
        return ans;
    }
};