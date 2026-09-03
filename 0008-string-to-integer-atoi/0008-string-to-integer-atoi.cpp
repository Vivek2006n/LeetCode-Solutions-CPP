class Solution {
public:
    int myAtoi(string s) {
        int i =0;
        int sign = 1;
        while(i<s.size() && s[i]==' '){
            i++;
        }

        if(i<s.size() && s[i]=='-'){
            sign = -1;
            i++;
        }
        else if(i<s.size() && s[i]=='+'){
            i++;
        }
        long long num = 0;
        
        while(i<s.size() && s[i]>='0' && s[i]<='9'){
            int digit = s[i] - '0';
            if (num>INT_MAX / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            num = num*10+digit;
            i++;
        }
        
        num = num*sign;
        if(num>INT_MAX){
            return INT_MAX;
        }
        if(num<INT_MIN){
            return INT_MIN;
        }
        return num;
    }
};