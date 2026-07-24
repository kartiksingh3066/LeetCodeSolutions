#include<iostream>
using namespace std;

int count=0;
int number(int N){
    if(count==N+1) return 0;
    cout<<count<<endl;
    count++;
    number(N);
}

int main(){
    number(11);
    return 0;
}