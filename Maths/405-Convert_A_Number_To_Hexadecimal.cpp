class Solution {
public:
    string toHex(int num) {
        if(num==0){return "0";}
        unsigned int n=num;
        string chars="0123456789abcdef";
        string result="";

        while(n>0){
            long long rem=n%16;
            result.push_back(chars[rem]);
            n=n/16;    
        }
        reverse(result.begin(),result.end());
        return result;
    }
};