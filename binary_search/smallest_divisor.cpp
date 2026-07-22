#include<bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int>&nums,int threshold){
    int ans=0;
    int n=nums.size();
    int result=INT_MAX;
    for(int i=0;i<n;i++){
        int temp=nums[i];
        for(j=0;j<n;j++){
            ans+=ceil((double)nums[j]/(double)temp);
        }
        result=min(ans,result);
    }
    return result;
}