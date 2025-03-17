class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);

        for (int i = 0; i < numRows; i++) {
            // Initialize the row with 1s
            result[i] = vector<int>(i + 1, 1);

            // Update the inner elements based on the previous row
            for (int j = 1; j < i; j++) {
                result[i][j] = result[i - 1][j] + result[i - 1][j - 1];
            }
        }
        return result;
    }

};