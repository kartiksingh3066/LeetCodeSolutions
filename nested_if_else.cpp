#include<iostream>
#include<string>

using namespace std;

int main(){
    int x;
    int y;
    cout<<"ENTER x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;

    if(x>10){
        cout<<"x is greater than 10\n";
        if(y>20){
            cout<<"y is also greater than  20\n";
        }
    }
    return 0;
}