class Solution {
public:
    int solve(int i,int j,int prev,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i==grid.size() || i<0 || j==grid[0].size() || grid[i][j]<=prev)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int diag_up=1+solve(i-1,j+1,grid[i][j],grid,dp);
        int diag_down=1+solve(i+1,j+1,grid[i][j],grid,dp);
        int right=1+solve(i,j+1,grid[i][j],grid,dp);

        return dp[i][j]=max({diag_up,diag_down,right});
    }
    int maxMoves(vector<vector<int>>& grid) {
        int maxi=INT_MIN;
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        for(int i=0;i<grid.size();i++){
            maxi=max(maxi,solve(i,0,-1e9,grid,dp));
        }
        return maxi-1;
    }
};