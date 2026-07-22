#include<iostream>
using namespace std;

int pallindrome(int n){
    int reverseNum=0;
    int number=n;
    while(n>0){
        int lastDigit=n%10;
        reverseNum=(reverseNum*10)+lastDigit;
        n=n/10;
    }
    if(number==reverseNum){
        cout<<"The number is pallindrome";
    } else{
        cout<<"It is not a pallindrome";
    }
}

int main(){
    int n;
    cout<<"Enter the number n :";
    cin>>n;
    pallindrome(n);
    return 0;
}