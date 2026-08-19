class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int ans = 0;
        map<int, int> mp;
        for (int r = 0; r < n; r++) { // initializing the window
            mp[s[r]]++;
            while (mp[s[r]] > 1) { // if the window is invalid
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1); // updating the answers
        }
        return ans;
    }
};