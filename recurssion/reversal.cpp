#include<iostream>
using namespace std;

int number(int N){
    if(N<=0) return 0;
    cout<<N<<endl;
    N--;
    number(N);
}

int main(){
    number(11);
    return 0;
}