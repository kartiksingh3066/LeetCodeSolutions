#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int bottom=m-1;
        int right=n-1;
        int top=0;
        int left=0;
        vector<int>ans;
        while(bottom>=top && right>=left){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(bottom>=top){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            if(right>=left){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
            }
            left++;
            
        }
        for(int x:ans) cout<<x<<" ";
    }
};
int main(){
    vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    Solution sol;
    sol.spiralOrder(matrix);
}