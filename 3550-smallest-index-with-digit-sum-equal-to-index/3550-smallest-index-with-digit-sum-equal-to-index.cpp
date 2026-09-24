class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
           for(int i=0;i<nums.size();i++){
            int digit = 0;
            int n = nums[i];
            while(n>0){
                digit += n%10;
                 n = n/10;
            }
                if(digit==i){
                    return i;
                }
           }
           return -1;
    }
};