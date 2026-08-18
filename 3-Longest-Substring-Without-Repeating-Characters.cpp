class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r = -1;    
        int l = 0;
        map<int, int> mp;
        int n = s.size();
        int temp = 0;
        while (l < n) {
            if (mp[s[r + 1]] == 0 && r + 1 < n) {  //checking if the right element exists or not
                r++;
                mp[s[r]]++;
                temp = max(temp, r - l + 1);
            } else {
                mp[s[l]]--;
                l++;
            }
        }
        return temp;
    }
};