class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(); //number of rows
        int c=matrix[0].size(); //number of columns
        int left=0;int right=r*c-1; 

        while(left<=right){
            int mid=left+(right-left)/2;//finding mid , assuming the 2d matrix flattened as 1d matrix
            int row=mid/c; //finding row of mid element 
            int column=mid%c; //finding column of mid element
            int value=matrix[row][column]; //finding value 
            if(value==target){
                return true;
            }
            else if(value<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
};
