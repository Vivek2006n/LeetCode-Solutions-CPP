class Solution {
public:
    int maxScore(string s) {
         int n = s.size();
        vector<int> prefixZero(n, 0);

        prefixZero[0] = (s[0] == '0');
        for(int i = 1; i < n; i++){
            prefixZero[i] = prefixZero[i - 1] + (s[i] == '0');
        }
        int totalOnes = 0;
        for(char c : s){
            if(c == '1') totalOnes++;
        }

        int ans = 0;
        for(int i = 0; i < n - 1; i++){
            int leftZeros = prefixZero[i];
            int rightOnes = totalOnes - (i + 1 - prefixZero[i]);
            ans = max(ans, leftZeros + rightOnes);
        }

        return ans;
    }
};