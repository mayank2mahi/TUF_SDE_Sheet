class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int prd = 0;
        int sed = 0;
        for(int i = 0; i < n; i++){
            prd += mat[i][i];
            sed += mat[i][n-i-1];
        }
        if(n % 2 == 1){
            return prd + sed - mat[n/2][n/2];
        }
        else{
            return prd + sed;
        }
    }
};