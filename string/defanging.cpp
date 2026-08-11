#include<bits/stdc++.h>

using namespace std;

string defangIPaddr(string address){
    string ans='';
    for(int i=0;i<address.size();i++){
        if(address[i]=='.') ans+=[.];
        ans+=address[i];
    }
    return ans;
}