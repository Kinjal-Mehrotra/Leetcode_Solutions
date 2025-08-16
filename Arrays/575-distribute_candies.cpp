class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        //we will create a set of items from candyType vector , this helps us know the number of types
        set<int> unique(candyType.begin(),candyType.end());
        
        //the doctor has allowed to each n/2 candies
        int n=candyType.size()/2;
        //finding the total number of categories that she can take 
        int m=unique.size();

        //choosing the min of the number of types or half the candies
        return min(n,m);

    }
};
