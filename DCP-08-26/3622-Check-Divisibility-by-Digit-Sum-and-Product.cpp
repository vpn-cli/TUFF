class Solution {
public:
    long long digitsum(long long x){
        long long xx=x;
        long long count=0;
        while(xx>0){
            count+=xx%10;
            xx/=10;
        }
        return count;
    }
        long long prodsum(long long x){
            long long xx=x;
        long long count=1;
        while(xx>0){
            count*=(xx%10);
            xx/=10;
        }
        return count;
    }
    bool checkDivisibility(int n) {
        cout<<digitsum(n)<<" "<<prodsum(n);
        if (n%(digitsum(n)+prodsum(n))==0)return true;
        return false;
    }
};