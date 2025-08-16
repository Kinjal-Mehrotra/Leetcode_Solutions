class Solution {
public:
    string convertToBase7(int num) {
        if (num==0) {return "0";}
        bool isnegative=num<0;
        string result="";
        int n=abs(num);
        while(n>0){
            int rem=n%7;
            result+=to_string(rem);
            n=n/7;
        }
        
        reverse(result.begin(),result.end());
        if (isnegative==true) {result="-"+result;}
        return result;
    }
};