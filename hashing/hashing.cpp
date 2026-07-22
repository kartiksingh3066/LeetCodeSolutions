#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number n : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the arrays number : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"Enter the number q : "<<endl;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
}