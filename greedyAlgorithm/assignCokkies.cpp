#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int assignCookies(vector<int>&g,vector<int>&s){
        int n=g.size();
        int m=s.size();

        int l=0;
        int r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(l<n){
            if(g[l]<=s[r]){
                r++;
            }
            l++;
        }
        return r;
    }
};

int main(){
    vector<int>g = {1,2};
    vector<int>s={1,12,3};
    Solution sol;
    cout<<sol.assignCookies(g,s);
}