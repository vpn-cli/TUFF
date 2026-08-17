class Solution {
public:
    bool judgeCircle(string moves) {
         int n = moves.size();

         int x=0;
         int y=0;
         for(auto ch:moves){
            if (ch=='L')x--;
            if (ch=='R')x++;
            if (ch=='U')y++;
            if (ch=='D')y--;
         }
         if (x==0 && y==0)return true;
         return false;
     }
};