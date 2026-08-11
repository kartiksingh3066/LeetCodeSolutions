#include<iostream>
#include<string>
using namespace std;

int pattern(int n){
    string alphabet="ABCDE";
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<alphabet[j]<<"  ";
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