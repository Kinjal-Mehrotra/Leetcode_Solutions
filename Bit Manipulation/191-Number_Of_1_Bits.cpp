class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        for(int i=0;i<32;i++){
            //this will tell us whether 1 is present at index i or not, if its present we increment the counter
            if(n & (1<<i)){
                count++;
            }
        }
        return count;
    }
};