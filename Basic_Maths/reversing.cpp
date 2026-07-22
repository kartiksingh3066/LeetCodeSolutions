#include<iostream>
using namespace std;

int counting(int n){
    int reverseNum=0;
    while(n>0){
        int lastDigit=n%10;
        reverseNum=(reverseNum*10)+lastDigit;
        n=n/10;
    }
    cout<<"Reverse of digit n is : "<<reverseNum;
}

int main(){
    int n;
    cout<<"Enter the number n :";
    cin>>n;
    counting(n);
    return 0;
}