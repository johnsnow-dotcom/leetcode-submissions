class Solution {
int m,n;
bool dfs(vector<vector<int>>&grid,int i,int j){
    if(i<0||i>=m||j<0||j>=n) return false;
    if(grid[i][j]) return true;
    grid[i][j]=1;
    return dfs(grid,i+1,j) & dfs(grid,i-1,j) & dfs(grid,i,j+1) & dfs(grid,i,j-1);
}
public:
    int closedIsland(vector<vector<int>>& grid) {
     m = grid.size();
     n = grid[0].size();
     int count = 0;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!grid[i][j]) count += dfs(grid,i,j);
        }
     }  
     return count; 
    }
};