#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i<0 && nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=n-1;
            int mid=(left+right)/2;
            while(left<mid && mid<right){
                int sum=nums[i]+nums[left]+nums[mid]+nums[right];
                if(sum==target){
                    result.push_back({nums[i],nums[left],nums[mid],nums[right]});
                    while(left<mid && nums[left]==nums[left+1]) left++;
                    while(mid<right && nums[right]==nums[right-1]) right--;

                    left++;
                    right--;
                }else if(sum<0){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return result
    }
};