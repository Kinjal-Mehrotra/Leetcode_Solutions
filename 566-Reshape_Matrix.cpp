class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r1=mat.size();
        int c1=mat[0].size();

        vector<vector<int>> result(r,vector<int>(c));

        //if the matrix can't be reshaped or if the reshaped matrix columns and rows are same, then we return  
        if((r1*c1 != r*c) || ((c==c1) && (r=r1)) ) return mat;

        int row=0,column=0;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                result[row][column]=mat[i][j];
                column++;
                if(column==c){
                    column=0;
                    row++;
                }
            }
        }
        return result;
    }
};