#include<iostream>
using namespace std;

int count=0;
void name(){
    if(count==5) return;
    cout<<"KARTIK SINGH"<<endl;
    count++;
    name();
}

int main(){
    name();
    return 0;
}