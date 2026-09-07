#include<bits/stdc++.h>

using namespace std;

class Solution{
    private:

    void dfs(int row,int column,vector<vector<int>>&vis,vector<vector<char>>&board){
        vis[row][column]=1;
        int n=board.size();
        int m=board[0].size();
        int drow={-1,0,+1,0};
        int dcol={0,+1,0,-1};

        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=column+dcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && board[nrow][ncol]=="0" && !vis[nrow][ncol]){
                dfs(nrow,ncol,vis,board);
            }
        }
    }
public:

void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        for(int j=0;j<m;j++){
            if(board[0][j]=="0" && !vis[0][j]){
                dfs(0,i,vis,board);
            }
            if(board[n-1][j]=="0" && !vis[n-1][j]){
                dfs(n-1,j,vis,board);
            }
        }

        for(int i=0;i<n;i++){
            if(board[i][0]=="0" && !vis[i][0]){
                dfs(i,0,vis,board);
            }
            if(board[i][m-1]=="0" && !vis[i][m-1]){
                dfs(i,m-1,vis,board);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=="0" && !vis[i][j]){
                    board[i][j]="X";
                }
            }
        }
    }
    
};