class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector <bool> visited(n,false);
        int count  = 0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,isConnected,visited);
            }
        }
        return count;
    }


    void dfs(int city,vector<vector<int>>& isConnected,vector<bool>& visited){
        visited[city] = true;
        for(int i = 0;i<isConnected.size();i++){
            if(isConnected[city][i] && !visited[i]){
                dfs(i, isConnected, visited);
            }
        }
    }
};