class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CurrentSum = 0;
        int MaxSum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            CurrentSum += nums[i];
            if(CurrentSum > MaxSum){
                MaxSum = CurrentSum;
            }

            if(CurrentSum < 0){
                CurrentSum = 0;
            }
         }
         return MaxSum;
        }
};