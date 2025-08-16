class Solution {
public:
    bool isprime(int num){
        if (num<=1){return false;}
        for(int i=2;i*i<=num;i++){
            if(num%i==0){return false;}
        }
        return true;
    }

    int countOnes(int number){
        int count=0;
        while(number>0){
            if(number%2==1){
                count++;
            }
            number=number/2;
        }
        return count;
    }
    
    int countPrimeSetBits(int left, int right) {
        int total=0;
        for(int i=left;i<=right;i++){
            int counter=countOnes(i);
            if (isprime(counter)){total++;}
        }
        return total;
    }
};