class Solution {
public:
    int bitwiseComplement(int n) {
        //edge case
        if(n==0){return 1;}

        int temp=n;
        int mask=0;
        //the mask is the same length as the number with all 1s
        while(temp!=0){
            mask=(mask<<1)|1;
            temp>>=1;
        }
        //if we & the not of the number with the mask , all the extra 1s are removed and only the necessary bit positions are left 
        int ans=(~n)&mask;
        return ans;
    }
};