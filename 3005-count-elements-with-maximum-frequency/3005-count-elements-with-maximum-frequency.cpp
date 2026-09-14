class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        int maxfreq = 0;
        for(auto x : mp){
            maxfreq = max(maxfreq,x.second);
        }

        int count = 0;
        for(auto y : mp){
            if(y.second == maxfreq){
                count++;
            }
        }
        return maxfreq*count;
    }
};