class Solution {

public:
    vector<vector<int>> transposeMatrix(vector<vector<int>>& mat){
        int rowsCnt = mat.size();
        int colCnt = mat[0].size();
        vector<vector<int>> ans(colCnt,vector<int>(rowsCnt));
        for(int i=0; i<rowsCnt ;i++){
            for(int j =0;j<colCnt; j++){
                ans[j][i] = mat[i][j];
            }
        }
        return ans;
    }
    void reverseRow(vector<int>& mat){
        int col = mat.size();
        int k = col/2;
        for(int i= 0;i<k;i++){
            swap(mat[i],mat[col-i-1]);
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int col = matrix[0].size();
        int row = matrix.size();
        // now first take transpose of the matrix
        matrix= transposeMatrix(matrix);
        for(int i=0;i<row;i++){
            reverseRow(matrix[i]);
        }
        
    }
};