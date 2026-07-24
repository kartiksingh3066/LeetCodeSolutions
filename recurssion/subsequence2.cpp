#include<iostream>
#include<vector>

using namespace std;
void printSubsequences(int ind, vector<int> &ds,int arr[],int n){
    if(ind==n){
        if(ds.size()==0){
            cout<<"{}"<<endl;
        }else{
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    printSubsequences(ind+1,ds,arr,n);

    ds.pop_back();
    printSubsequences(ind+1,ds,arr,n);
}

int main(){
    int arr[]={3,4,7};
    int n=3;
    vector<int> ds;
    printSubsequences(0,ds,arr,n);
    return 0;
}