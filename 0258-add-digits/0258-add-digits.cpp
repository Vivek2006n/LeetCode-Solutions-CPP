class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
        int sum = 0;
        if(num==0){
            return 0;
        }
            while(num>0){
                int x = num%10;
                sum +=x;
                 num = num/10;   
            }
            num = sum;
        }
        return num;
    }
};