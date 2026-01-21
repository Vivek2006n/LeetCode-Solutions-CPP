class Solution {
public:
    vector <int> prefix;
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);

        prefix[0] = nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }

        int left = 0,right=0;
        int total = prefix[n-1];

            for(int i=0;i<n;i++){
                if(i==0){
                    left = 0;
                    right = total-prefix[i];
                    if(left==right){
                        return i;
                    }
                }
                else{
                    left = prefix[i-1];
                    right = total-prefix[i];
                    if(left==right){
                        return i;
                    }
                }
            }
            return -1;
    }
};