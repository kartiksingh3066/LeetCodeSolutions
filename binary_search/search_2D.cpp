#include<bits/stdc++.h>

using namespace std;

int search(vector<int> &matrix,int n,int target){
    int low=0;
    int high=n-1;

    int ans=0

    while(low<=high){
        int mid=low+(high-low)/2;
        if(matrix[mid]>=target){
            high=mid-1;
            ans=1;
        }else{
            low=mid+1;
        }
    }
    return ans
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        int ans=0;

        for(int i=0;i<n;i++){
            int found=search(matrix[i],m,target);

            if(found==1){
                ans=1;
            }
        }
        return ans;

    }