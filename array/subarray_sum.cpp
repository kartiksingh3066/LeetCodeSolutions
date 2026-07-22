#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k){
        unordered_map<int,int> mp;
        mp[0] = 1;   // Important

        int sum = 0;
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(mp.find(sum - k) != mp.end()){
                cnt += mp[sum - k];
            }

            mp[sum]++;
        }

        return cnt;
    }
};

int main(){
    vector<int> nums = {1,1,1};
    int k = 2;

    Solution sol;
    cout << sol.subarraySum(nums,k);
}