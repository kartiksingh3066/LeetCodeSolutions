#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int slow=0;
        int fast=1;
        while(fast<n){
            if(nums[fast]==nums[slow]){
                nums[slow]=2*nums[slow];
                nums[fast]=0;
                fast++;
                slow++;
            }
            fast++;
            slow++;
        }
    }
};