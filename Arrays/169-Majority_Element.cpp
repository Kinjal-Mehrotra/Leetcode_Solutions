class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int votes=0;
        for(int num:nums){
            if(votes==0){
                candidate=num;
            }
            votes+=(num==candidate)?1:-1;
        }
        return candidate;
    }
};
