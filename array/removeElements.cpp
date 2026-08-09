#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            if (nums[low] == val) {
                
                nums[low] = nums[high];
                high--;
            } else {
                
                low++;
            }
        }

        
        return low;
    }
};

int main(){
    vector<int>nums={3,2,2,3};
    int val=3;
    Solution sol;
    cout<<sol.removeElement(nums,val);
}