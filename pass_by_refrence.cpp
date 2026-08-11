#include<iostream>
using namespace std;

void swapNumbers(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}

int main(){
    int firstNum=10;
    int secondNum=20;

    cout<<"Before swapping : ";
    cout<<"firstNum : "<<firstNum<<"\t secondNum : "<<secondNum<<endl;

    swapNumbers(firstNum,secondNum);
    cout<<"After swapping : ";
    cout<<"firstNum : "<<firstNum<<"\t secondNum : "<<secondNum<<endl;


    return 0;

}