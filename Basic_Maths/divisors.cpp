#include<iostream>
using namespace std;

int divisors(int n){
    cout<<"These are the factors of n :"<<endl;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }  
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    divisors(n);
    return 0;
}