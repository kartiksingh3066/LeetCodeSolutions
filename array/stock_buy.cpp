#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>&nums){
    int buy=INT_MAX;
    int sell=INT_MIN;
    for(int i=0;i<nums.size();i++){
        buy=min(buy,nums[i]);
        sell=max(sell,nums[i]-buy);
    }
    cout<<sell;
}

int main(){
    vector<int>nums={7,1,5,3,6,4};
    maxProfit(nums);
}