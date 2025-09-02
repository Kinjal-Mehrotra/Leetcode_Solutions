class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int e1=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            e1=max(nums[i],e1+nums[i]);
            max_sum=max(max_sum,e1);
        }
        return max_sum;
    }
};