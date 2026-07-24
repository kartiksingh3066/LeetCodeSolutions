#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
   bool isBitSet(int n,int i){
    if((n & (1<<i))!=0){
        return true;
    } else{
        return false;
    }
   }
};

int main(){
    int n=5;
    int i=1;
    Solution sol;
    cout<<sol.isBitSet(n,i);
}