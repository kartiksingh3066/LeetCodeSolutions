#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:

    int characterReplacement(string s, int k){
        int n=s.size();
        int l=0;
        int r=0;
        int maxi=0;
        int max_freq=0;
        int hash[26]={0};
        while(r<n){
            hash[s[r]-'A']++;
            max_freq=max(max_freq,hash[s[r]-'A']);

            while((r-l+1)-maxi>k){
                hash[s[l]-'A']--;
                l++;
            }
            maxi=max(max_freq,r-l+1);
            r++;
        }
        return maxi;
    }
};

int main(){
    string s="ABAB";
    int k=2;
    Solution sol;
    cout<<sol.characterReplacement(s,k);
}