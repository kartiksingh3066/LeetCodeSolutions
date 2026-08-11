#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt++;
            if(nums[i]+i+1==n){
                break;
            }
        }
        return cnt;
    }
};

int main(){
    vector<int>nums={2};
    Solution sol;
    cout<<sol.jump(nums);
}