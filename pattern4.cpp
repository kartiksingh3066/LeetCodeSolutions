#include<iostream>

using namespace std;

int pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<"  ";
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