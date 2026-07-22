#include<iostream>
using namespace std;

int counting(int n){
    int count=0;
    while(n>0){
        count=count+1;
        n=n/10;
    }
    cout<<"No. of digits in the number n : "<<count;
}

int main(){
    int n;
    cout<<"Enter the number n :";
    cin>>n;
    counting(n);
    return 0;
}