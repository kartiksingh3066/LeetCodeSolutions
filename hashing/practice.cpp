#include<iostream>
#include<map>

using namespace std;

int main(){
    int arr[6]={1,2,3,2,1,5};

    map<int,int>mp;
    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }

    for(auto it : mp){
        cout<<it.first<<"  "<<it.second<<endl;
    }
    return 0;
}