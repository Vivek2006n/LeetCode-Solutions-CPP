class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;

        vector<int> ans(n);
        int pos = n-1;


        while(i<=j){
            int leftsquare = nums[i] * nums[i];
            int rightsquare = nums[j] * nums[j];

            if(leftsquare > rightsquare){
                ans[pos] = leftsquare;
                    i++;
            }
            else{
                ans[pos] = rightsquare;
                    j--;
            }
            pos--;
        }
        return ans;
    }
};