#include<bits/stdc++.h>

using namespace std;

vector<int>movingZeroes(vector<int>&nums,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }

    int nz=temp.size();

    for(int i=0;i<nz;i++){
        nums[i]=temp[i];
    }

    for(int i=nz;i<n;i++){
        nums[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int>nums={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n=nums.size();
    movingZeroes(nums,n);
}