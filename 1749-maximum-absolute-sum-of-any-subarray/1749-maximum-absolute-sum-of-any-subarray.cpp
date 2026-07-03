class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int left = 0;
        int currMax = 0;
        int maxSum = INT_MIN;
        int currMin= 0;
        int minSum = INT_MAX;

        for(int num : nums){
            //MAX
            currMax = max(num,currMax+num);
            maxSum = max(maxSum,currMax);

            //MIN
            currMin = min(num,currMin+num);
            minSum = min(minSum,currMin);
        }
        return max(maxSum,abs(minSum));
    }
};