class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]={0};
        for(int num:nums){
            count[num]++;
        }
        
        int j=0;
        for(int i=0;i<3;i++){
            int counter=count[i];
            while(counter!=0){
                nums[j++]=i;
                counter--;
            }
        }
    }
};