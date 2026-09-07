#include<bits/stdc++.h>

using namespace std;

class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid){
        int m=grid.size();
        int n=grid[0].size();
        vis[row][col]=1;

        int drow[]={+1,0,-1,0};
        int dcol[]={0,-1,0,+1};
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];

            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                dfs(nrow,ncol,vis,grid);
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));

        for(int j=0;j<n;j++){
            if(grid[0][j]==1){
                dfs(0,j,vis,grid);
            }
            if(grid[m-1][j]==1){
                dfs(m-1,j,vis,grid);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[i][0]==1){
                dfs(i,0,vis,grid);
            }
            if(grid[i][n-1]==1){
                dfs(i,n-1,vis,grid);
            }
        }

        int cnt=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]) cnt++;
            }
        }

        return cnt;
    }
};

int main(){
    vector<vector<int>>grid = {{0,0,0,0},{1,0,1,0},{0,1,1,0},{0,0,0,0}};
    Solution sol;
    cout<<sol.numEnclaves(grid);
}