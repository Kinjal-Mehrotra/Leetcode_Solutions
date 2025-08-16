class Solution {
public:
    vector<int> constructRectangle(int area) {
        //we need to minimize difference between L and W, which means the rectangle is closer to the sqaure , lets assume the width is equal to the sqrt of area
        int w=sqrt(area);
        while(area%w!=0){
            w--;
        }
        int l=area/w;
        return {l,w};
    }
};