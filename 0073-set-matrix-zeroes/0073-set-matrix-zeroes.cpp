class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int size=matrix.size();
        int size1=matrix[0].size();
        int col=1;
        for(int i=0;i<size;i++){
            for(int j=0;j<size1;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col=0;
                    }
                }
            }
        }
        for(int i=1;i<size;i++){
            for(int j=1;j<size1;j++){
                if(matrix[i][j]!=0){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
              }
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<size1;i++){
                matrix[0][i]=0;
            }
        }
        if(col==0){
            for(int i=0;i<size;i++){
                matrix[i][0]=0;
            }
        }
    }
};