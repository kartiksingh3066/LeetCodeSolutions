#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int n=nums.size();
        int mini=INT_MAX;
        int cnt=0;

        while(right<n){
            cnt=cnt+nums[right];
           
            right++;

        }

        if(mini==INT_MAX) return 0;
        return mini;
    }
};