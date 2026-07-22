#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    map<int,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int q;
    cout<<"Enter  no of queries : ";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter the character : ";
        cin>>c;
        cout<<mp[c]<<endl;
    }
}