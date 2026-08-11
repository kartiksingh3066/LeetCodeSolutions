#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int KthSmallest(int arr[],int l,int r,int k){
        priority_queue<int>pq;

        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        for(int i=k;i<=r;i++){
            if(pq.top()>arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};

int main(){
    int arr[]={1,4,3,5,6,9,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int r=n-1;
    Solution sol;
    cout<<sol.KthSmallest(arr,l,r,3);

}