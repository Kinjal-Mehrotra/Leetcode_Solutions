class Solution {
public:
    bool isPerfectSquare(int num) {
        //since num is in range 1 <= num <= 2^31 - 1, we will be using binary search logic for the following

        if(num<=1){return true;}//if number is 0 or 1 , its already a perfect square

        //since a numbers square root cannot be greater than half of the number, set right limit to num/2
        long long left=2;
        long long right=num/2;

        while(left<=right){
            long long mid=left+(right-left)/2;
            long long sq=mid*mid;

            if(sq==num){return true;}
            else if(sq<num){left=mid+1;}
            else{right=mid-1;}
        }
        return false;
    }
};