#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int majorityElement(vector<int>&nums){
        int n=nums.size();
        map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>n/2){
                cout<<it.first;
            }
        }
        return 0;
    }
};

int main(){
    vector<int>nums={3,2,3};
    Solution sol;
    sol.majorityElement(nums);
}