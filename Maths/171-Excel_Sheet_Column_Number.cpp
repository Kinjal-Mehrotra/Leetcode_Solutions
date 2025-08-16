class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result=0;
        //traversing every character and then converting it into its respective letter
        for(char c:columnTitle){
            int val=c-'A'+1;
            result=result*26+val;
        }
        return (int) result;
    }
};