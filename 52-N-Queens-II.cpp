class Solution {
public:
    int queens[20];
    bool check(int row, int col, int n) {
        for (int i = 0; i < row; i++) {
            int prow = i;
            int pcol = queens[i];
            if (pcol == col || prow == row ||
                (abs(prow - row) == abs(pcol - col)))
                return 0;
        }
        return 1;
    }

    int rec(int level, int n) {
        if (level == n)
            return 1;
        int ans = 0;
        for (int col = 0; col < n; col++) {
            if (check(level, col, n)) {
                queens[level] = col;
                ans += rec(level + 1, n);
            }
        }
        return ans;
    }

    int solve(int n) {
        memset(queens, -1, sizeof(queens));
        return rec(0, n);
    }
    int totalNQueens(int n) {
       return solve(n); 
    }
};