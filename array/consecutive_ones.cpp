#include<bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int>&nums){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }else{
            cnt=0;
        }
    }
    cout<<maxi;
}

int main(){
    vector<int>nums={1,0,1,1,0,1};
    findMaxConsecutiveOnes(nums);
}