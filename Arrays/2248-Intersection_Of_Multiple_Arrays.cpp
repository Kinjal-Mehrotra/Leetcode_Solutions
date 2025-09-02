class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> freq;
        for(vector<int>element:nums){
            for(int i:element){
                freq[i]++;
            }
        }
        int n=nums.size();
        vector<int> result;
        for(auto pair:freq){
            if(pair.second==n){
                result.push_back(pair.first);
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};