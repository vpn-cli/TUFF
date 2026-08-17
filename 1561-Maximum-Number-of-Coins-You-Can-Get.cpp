class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(),piles.end(),greater<int>());
        int l=0;
        int r=1;
        int m=n-1;
        int counter=0;
        int num=n/3;
        while(num--){
            counter+=piles[r];
            r+=2;
        }
        cout<<counter;
        return counter;
    }
};