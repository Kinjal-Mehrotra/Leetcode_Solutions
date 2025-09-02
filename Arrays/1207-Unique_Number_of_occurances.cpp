class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> freq;
        int n=arr.size();
        //storing the occurances of the numbers in a map
        for(int a:arr){
            freq[a]++;
        }
        set<int> freq_set;
        //storing occurances in set, removes any duplicates
        for(auto pair:freq){
            freq_set.insert(pair.second);
        }
        //if the sizes become different , it means that there was repeated occurance
        return freq.size()==freq_set.size();
    }
};