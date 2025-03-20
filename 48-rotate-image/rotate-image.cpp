class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = n; // since square matrix
        
        for(int i = 0; i < n; i++){
            for(int j = i; j < m; j++){                  // transpose
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < n; i++){                      // reverse rows
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};