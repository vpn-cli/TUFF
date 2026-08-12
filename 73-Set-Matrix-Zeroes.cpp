class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        bool firstrowzero = false;
        bool firstcolzero = false;

        int m = matrix.size();        // ROWS
        int n = matrix[0].size();     // COLUMNS

        // Check first row
        for(int i=0; i<n; i++){
            if(matrix[0][i] == 0)
                firstrowzero = true;
        }

        // Check first column
        for(int i=0; i<m; i++){
            if(matrix[i][0] == 0)
                firstcolzero = true;
        }

        // Mark rows and columns
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0; // mark column
                    matrix[i][0] = 0; // mark row
                }
            }
        }

        // Make columns zero
        for(int j=1; j<n; j++){
            if(matrix[0][j] == 0){
                for(int i=1; i<m; i++){
                    matrix[i][j] = 0;
                }
            }
        }

        // Make rows zero
        for(int i=1; i<m; i++){
            if(matrix[i][0] == 0){
                for(int j=1; j<n; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        // First row
        if(firstrowzero){
            for(int j=0; j<n; j++){
                matrix[0][j] = 0;
            }
        }

        // First column
        if(firstcolzero){
            for(int i=0; i<m; i++){
                matrix[i][0] = 0;
            }
        }
    }
};