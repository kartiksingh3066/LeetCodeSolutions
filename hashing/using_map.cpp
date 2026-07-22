#include<iostream>
#include<map>

using namespace std;

int main(){
    int arr[6]={1,2,3,2,1,5};

    map<int,int>mp;
    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }

    int q;
    cout<<"Enter the number q : ";
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter the number num : ";
        cin>>num;
        cout<<mp[num]<<endl;
    }
    return 0;
}