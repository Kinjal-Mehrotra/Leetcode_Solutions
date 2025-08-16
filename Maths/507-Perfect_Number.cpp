class Solution {
public:

    bool checkPerfectNumber(int num) {
    
        if (num<=1) {return false;}
        bool ans=false;
        int half=num/2;

        vector<int> result;

        for(int i=1;i<=half;i++){
            if(num%i==0){
                result.push_back(i);
            }
        }

        int sum=0;
        for(int n:result){
            sum+=n;
        } 

        if(sum==num){ans=true;}
        return ans;
    }
};
