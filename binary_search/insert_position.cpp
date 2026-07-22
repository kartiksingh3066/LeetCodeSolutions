#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int ans=n;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            };
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

