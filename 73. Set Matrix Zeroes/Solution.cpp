class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // O(m+n) solution as taking two vector of size row and column
        
        int rows= matrix.size(); // m
        int clm = matrix[0].size(); //n
        vector<int> row(rows,0);
        vector<int> clms(clm,0);

        // find the positions of 0 
        for(int i=0;i<rows;i++){
            for(int j=0;j<clm;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    clms[j]=1;
                }
            }
        }
        // now fill the rows
        for(int i=0;i<rows;i++){
            if(row[i]==1){
                for(int j=0;j<clm;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int  i =0;i<clm;i++){
            if(clms[i]==1){
                for(int j=0;j<rows;j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};