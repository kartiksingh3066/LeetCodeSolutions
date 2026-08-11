#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int heapHeight(int n,int arr[]){
        if(n==1) return 1;

        int height=0;
        while(n>1){
            height++;
            n=n/2;
        }
        return height;
    }
};

int main(){
    int n=6;
    int arr[]={1,3,6,5,9,8};
    Solution sol;
    cout<<sol.heapHeight(n,arr);
}