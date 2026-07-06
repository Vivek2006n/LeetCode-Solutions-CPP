class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> mp;
        for(char s : magazine){
            mp[s]++;
        }

        for(char s : ransomNote){
            if(mp[s]==0){
                return false;
            }
            mp[s]--;
        }
        return true;
    }
};