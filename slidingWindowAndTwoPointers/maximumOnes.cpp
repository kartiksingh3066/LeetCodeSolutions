#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int zero_count = 0;
        int l = 0;
        int r = 0;
        int maxi = 0;
        
        while (r < n) {
            if (nums[r] == 0) {
                zero_count++;
            }
            
            // Fixed the inner loop logic to correctly shrink the window
            while (zero_count > k) {
                if (nums[l] == 0) {
                    zero_count--; 
                }
                l++; 
            }

            maxi = max(maxi, r - l + 1);
            r++;
        }
        return maxi;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    Solution sol;
    
    cout << sol.longestOnes(nums, k) << endl; 
    return 0;
}