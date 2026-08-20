class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0;
        int ans=0;
        map<int,int>mp;
        for(int r=0;r<n;r++){    // window init
            mp[fruits[r]]++;  
            while(mp.size()>2){   // while the window is invalid
                mp[fruits[l]]--;
                if (mp[fruits[l]]==0)mp.erase(fruits[l]);
                l++;
            }
            ans=max(ans,r-l+1);   // update the answer
        }
        return ans;
    }
};