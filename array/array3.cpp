#include<iostream>
#include<vector>

using namespace std;

int largestElement(int arr[],int &n){

    int max=arr[0];

    for(int i=0;i<n;i++){

        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;
}

int main(){
    int arr[6]={2,1,3,74,5,18};

    int n=sizeof(arr)/sizeof(arr[0]);

    largestElement(arr,n);
}