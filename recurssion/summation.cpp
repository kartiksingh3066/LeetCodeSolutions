#include<iostream>

using namespace std;


void summation(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    summation(i-1,sum+i);
}

int main(){
    int i=6;
    int sum=0;
    summation(i,sum);
}