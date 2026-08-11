#include<iostream>

using namespace std;

int arithmetic(int n){
    if(n>0){
        return n+arithmetic(n-1);
    } else{
        return 0;
    }
}

int main(){
   int result= arithmetic(10);
   cout<<result;
    return 0;
}