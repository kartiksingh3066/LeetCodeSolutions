#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    int temp,min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[]={1,5,3,6,17,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    return 0;
}