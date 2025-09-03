class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        sort(nums.begin(),nums.end());//sorting the vector

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){continue;}  //skipping duplicate values

            int left=i+1;
            int right=n-1;

            while(left<right){

                int sum=nums[i]+nums[left]+nums[right];

                if(sum==0){
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left]==nums[left+1]){left++;}
                    while(left<right && nums[right]==nums[right-1]){right--;}

                    left++;
                    right--;
                }
                //if sum becomes <0 , incrementing left pointer to move towards larger values
                else if(sum<0){
                    left++;
                }

                //if sum becomes>0 , decrementing right pointer to move towards smaller values
                else{
                    right--;
                }
            }
        }
        return result;
    }
};