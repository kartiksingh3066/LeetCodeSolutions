#include<iostream>
#include<vector>
using namespace std;

bool printS(int ind,vector<int> &ds,int sum,int s,int arr[],int n){
    if(ind==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
                return true;
            }
            cout<<endl;
        }
        return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];

    if(printS(ind+1,ds,sum,s,arr,n)==true) return true;

    s-= arr[ind];
    ds.pop_back();

    if(printS(ind+1,ds,sum,s,arr,n)==true) return true;

    return false;
}

int main(){
    int sum=3;
    vector<int> ds;
    int arr[]={3,1,2};
    int n=3;
    printS(0,ds,sum,0,arr,n);
    return 0;
}