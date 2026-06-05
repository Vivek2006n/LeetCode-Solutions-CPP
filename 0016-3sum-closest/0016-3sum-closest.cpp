class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        for(int x =0;x<nums.size()-2;x++){
            int i = x+1;
            int j = nums.size()-1;
            while(i<j){
                int sum = nums[x] + nums[i] + nums[j];
                if(sum<target){
                    i++;
                }
                else{
                    j--;
                }
                if(abs(sum - target) < abs(closest - target)){
                    closest = sum;
            }
        }
        }
        return closest;
    }
};