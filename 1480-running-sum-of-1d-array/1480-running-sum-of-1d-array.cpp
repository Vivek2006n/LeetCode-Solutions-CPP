class Solution {
public:
    vector<int> prefix;
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        return prefix;
    }
};