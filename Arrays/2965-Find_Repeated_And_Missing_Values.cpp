class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> result;
        int repeated;
        int missing;
        int n=grid.size();
        unordered_map<int,int> freq;
        for(auto element:grid){
            for(int num:element){
                freq[num]++;
            }
        }
        for(auto pair:freq){
            if(pair.second==2){
                repeated=pair.first;
            }
        } 
        for(int i=1;i<=n*n;i++){
            if(freq.count(i)==0){
                missing=i;
            }
        }
        result.push_back(repeated);
        result.push_back(missing);
        return result; 
    }
};