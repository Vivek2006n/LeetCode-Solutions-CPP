class Solution {
public:
    vector <int> prefix;
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);

        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }

        int leftsum = 0;
        int rightsum = 0;
        int total = prefix[n-1];

        for(int i=0;i<n;i++){
            if(i==0){
                leftsum = 0;
                rightsum = total-prefix[i];

                if(leftsum == rightsum){
                    return i;
                }
            }
            else{
                leftsum = prefix[i-1];
                rightsum = total - prefix[i];
                if(leftsum == rightsum){
                    return i;
                }
            }
        }
        return -1;
    }
};