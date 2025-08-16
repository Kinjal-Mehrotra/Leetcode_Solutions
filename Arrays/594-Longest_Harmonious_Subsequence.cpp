class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxx=0; //initializing variable to store result

        //creating map to store frequency of all numbers
        map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }

        
        for(auto& pair:freq){   
            if(freq.find(pair.first+1)!=freq.end()){
                maxx=max(maxx,pair.second+freq[pair.first+1]);
            }
        }
        return maxx;
    }
};