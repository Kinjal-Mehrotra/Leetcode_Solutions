class Solution {
public:
    bool isselfdividing(int num){
        int x=num;
        while(x>0){
            int rem=x%10;
            if(rem==0||num%rem!=0) {return false;}
            x=x/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(isselfdividing(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};