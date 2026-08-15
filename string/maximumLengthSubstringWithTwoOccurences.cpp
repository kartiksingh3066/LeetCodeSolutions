#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0;
        int right=0;
        int n=s.size();
        int maxi=0;
        unordered_map<int,int>mp;
        while(right<n){
            mp[s[right]-'a']++;

            while(mp[s[right]-'a']>2){
                mp[s[left]-'a']--;
                left++;
            }
            right++;
            maxi=max(maxi,right-left);
        }
        return maxi;
    }
};

int main(){
    string s="aaaa";
    Solution sol;
    cout<<sol.maximumLengthSubstring(s);
}