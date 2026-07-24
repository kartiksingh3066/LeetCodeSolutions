#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
   double mypow(double x,int n){
    double ans=1.0;
    long long nn=n;
    if(nn<0){
        nn=-nn;
    }
    while(nn>0){
        if(nn%2==1){
            ans=ans*x;
            nn--;
        }else{
            x=x*x;
            nn=nn/2;
        }
    }
    if(n<0){
        ans=1.0/ans;
    }
    return ans;
   }
};

int main(){
    double x = 2.00000;
    int n=-2;
    Solution sol;
    double result=sol.mypow(x,n);
    cout<<result;
}