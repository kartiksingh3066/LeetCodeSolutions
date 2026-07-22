#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>&piles){
    int maxi=INT-MIN;
    int n=piles.size();
    for(int i=0;i<n;i++){
        maxi=max(piles[i],maxi);
    }
    return maxi;
}


int countingHours(vector<int>& piles,int hourly){
    int totalHrs=0;
    int n=piles.size();
    for(int i=0;i<n;i++){
        totalHrs+=ceil((double) piles/(double) hourly);
    }
    return totalHrs;
}


int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findMax(piles);

        while(low<=high){
            int mid=low+(high-low)/2;

            totalHrs=countingHours(piles,mid);

            if(totalHrs<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
}