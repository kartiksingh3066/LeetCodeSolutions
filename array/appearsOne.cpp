#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int appearsOne(vector<int>&nums){
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                cout<<it.first;
            }
        }
        return 0;
    }
};

int main(){
    vector<int>nums={2,1,2};
    Solution sol;
    sol.appearsOne(nums);
}