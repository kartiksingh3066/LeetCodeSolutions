#include<iostream>
using namespace std;

int sumOfNumbers(int n){
    if(n==1){
        return 1;
    }
    return n+sumOfNumbers(n-1);
}

int main(){
    int n=987;
    cout<<sumOfNumbers(n);
    return 0;
}