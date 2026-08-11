#include<iostream>

using namespace std;

int pattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"ENTER THE NUMBER n : ";
    cin>>n;
    pattern(n);
    return 0;
}