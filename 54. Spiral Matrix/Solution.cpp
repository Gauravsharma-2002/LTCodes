class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cloms = matrix[0].size();
        int top = 0, bottom = rows - 1;
        int left = 0, right = cloms - 1;
        vector<int> ans;
        // here top<=bottom (means that there is atleast one row ) and
        // left<=right (ensures that there is atleast one column)
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                 // only do this if there is some rows left to print

                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (right >= left) {
                // only if my colums left to print 
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};