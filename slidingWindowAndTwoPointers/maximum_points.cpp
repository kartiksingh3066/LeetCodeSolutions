#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int left_sum=0;
        int right_sum=0;
        int maxi=0;
        for(int i=0;i<k;i++){
            left_sum+=nums[i];
            maxi=left_sum;
        }
        int right_index=n-1;
        for(int i=k-1;i>=0;i--){
            left_sum=left_sum-nums[i];
            right_sum=right_sum+nums[right_index];
            right_index--;
            maxi=max(maxi,left_sum+right_sum);
        }
        return maxi;
    }
}