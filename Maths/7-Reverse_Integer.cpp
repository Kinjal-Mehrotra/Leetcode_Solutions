class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        //if the number is negative, we will use this to add negative sign at the end of the solution
        bool neg=false;
        if (x<0){
            neg=true;
        }
        long long num=llabs((long long)x);
        //accessing the number digit wise and reversing it using the formula
        while(num!=0){
            int digit=num%10;
            ans=(ans*10)+digit;
            num=num/10;
        }
        //adding negative sign after reversing, if required
        if(neg){
            ans=-ans;
        }
        //if the ans goes outside the range, return 0 as mentioned in the question
        if(ans<INT_MIN || ans>INT_MAX){
            return 0;
        }
        return (int)ans;
    }
};