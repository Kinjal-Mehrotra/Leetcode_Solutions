class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        int s_size=s.length();
        int t_size=t.length();

        if(s_size!=t_size){
            return false;
        }

        for(char c:s){
            freq[c-'a']++;
        }

        for(char c:t){
            freq[c-'a']--;
        }

        for(int i:freq){
            if(i!=0){
                return false;
                break;
            }
        }

        return true;
    }
};
