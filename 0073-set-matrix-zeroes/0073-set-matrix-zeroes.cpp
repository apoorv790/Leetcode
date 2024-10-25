class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        vector<int>rowFlag(rows,0);
        vector<int>colsFlag(cols,0);

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    cout<<i<<" "<<j<<endl;
                    rowFlag[i]=1;
                    colsFlag[j]=1;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(rowFlag[i]==1|| colsFlag[j]==1){
                    matrix[i][j]=0;
                }
            
            }
        }
    }
};