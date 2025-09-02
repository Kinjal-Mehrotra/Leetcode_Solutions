class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            //mapping the numbers to index , since the numbers are 1 to N 
            int index=abs(nums[i])-1;
            if(nums[index]<0){
                //if the number is negative, it means that it has been visited before 
                result.push_back(abs(nums[i]));
            }
            else{
                //if the number is not visited we mark it as negative
                nums[index]=-nums[index];
            }
        }
        return result;
    }
};
