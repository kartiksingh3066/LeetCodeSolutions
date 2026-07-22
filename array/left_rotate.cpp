#include<bits/stdc++.h>

using namespace std;

void leftRotate(vector<int>&nums,int n){
    int r=nums[0];
    for(int i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=r;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}

int main(){
    vector<int>nums={1,3,5,1,7};
    int n=nums.size();
    leftRotate(nums,n);
}