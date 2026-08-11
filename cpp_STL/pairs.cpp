#include<iostream>
using namespace std;

void expalinpairs(){

    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;;


    pair<int,pair<int,int>>P={1,{3,4}};
    cout<<P.first<<" "<<P.second.second<<" "<<P.second.first<<endl;

    pair<int,int>array[]={{1,3},{2,5},{4,7}};
    cout<<array[0].second;

    }

int main(){
    expalinpairs();
    return 0;
}