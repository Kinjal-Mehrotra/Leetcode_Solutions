class Solution {
public:
    int maxArea(vector<int>& height) {
        //min height between two lines * index difference of both 
        int maxwater=0;
        int low=0;
        int high=height.size()-1;
        while(low<high){
            int min_height=min(height[low],height[high]);
            int temp=min_height*(high-low);
            maxwater=max(maxwater,temp);
            if(height[low]<=height[high]){low++;}
            else{high--;}
        }
        return maxwater;
    }
};