class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
     long long  n = wall[0].size();
        map<long long, long long> mp;
        long long sum = 0;
        long long maxi = 0;
        for (long long i = 0; i < n; i++) {
            sum += wall[0][i];
        }
        // int temp = 0;
        for (auto row : wall) {
           long long temp = 0;
            for (auto brick : row) {
               if (temp!=sum) temp += brick;
               if(temp!=sum) mp[temp]++;
            }
        }
        for (auto it : mp) {
            maxi = max(maxi, it.second);
        }
        return wall.size() - maxi;
    }
};