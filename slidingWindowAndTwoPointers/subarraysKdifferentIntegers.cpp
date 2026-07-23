#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int atMost(vector<int>&nums,int k){
        int l=0;
        int r=0;
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int>mp;

        while(r<n){
            mp[nums[r]]++;

            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};

int main(){
    vector<int>nums={1,2,1,2,3};
    int k=2;
    Solution sol;
    cout<<sol.subarraysWithKDistinct(nums,k);
}