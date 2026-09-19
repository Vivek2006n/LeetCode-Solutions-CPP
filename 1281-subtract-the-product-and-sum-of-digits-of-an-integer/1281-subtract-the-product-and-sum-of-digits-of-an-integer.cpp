class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit;
        int sum = 0;
        int mul = 1;
        while(n>0){
            digit = n%10;
            mul *= digit;
            sum += digit;
            n = n/10;
        }  
        return mul-sum;
    }
};