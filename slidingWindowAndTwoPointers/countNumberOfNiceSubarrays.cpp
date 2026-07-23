#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int atMost(vector<int>&nums,int k){
        int l=0;
        int r=0;
        int sub_arrays=0;
        int cnt=0;
        while(r<nums.size()){
            if(nums[r]%2==1) cnt++;
            while(cnt>k){
                if (nums[l]%2==1){
                    cnt--;
                }
                l++;
            }
        
            sub_arrays=sub_arrays+r-l+1;
            r++;
        }
        return sub_arrays;
}

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};

int main(){
    vector<int>nums={2,2,2,1,2,2,1,2,2,2};
    int k=2;
    Solution sol;
    cout<<sol.numberOfSubarrays(nums,k);

}