class Solution {
public:
    bool canWinNim(int n) {
        //the simple solution is to find mod of the number by 4
        //if the remainder is 1,2 or 3 you win, but if the number of stones is completely divisible by 4 , you lose 
        return n%4!=0;
    }
};