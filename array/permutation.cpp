#include<bits/stdc++.h>

using namespace std;

vector<int>nextArray(vector<int>&A){
    next_permutation(A.begin(),A.end());
    cout<<A;
}

int main(){
    vector<int>A={1,2,3};
    nextArray(A);
}