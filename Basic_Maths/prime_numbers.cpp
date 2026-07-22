#include<iostream>
using namespace std;

int primeNumber(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"It is a prime number";
    }else{
        cout<<"It is not a prime number";
    }
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    primeNumber(n);
    return 0;
}