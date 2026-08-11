#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:

    string longestPalindrome(string s){
        string temp="";
        int low=0;
        int high=s.size()-1;
        while(low<high){
            if(s[low]!=s[high]){
                if(s[low+1]==s[high]){
                    low++;
                    temp+=s[low];
                    high--;
                }
                if(s[low+1]!=s[high]){
                    high--;
                }
            }
            else{
                temp+=s[low];
                low++;
                high--;
            }
        }
        return temp;
    }
};

int main(){
    string s="babad";
    Solution sol;
    cout<<sol.longestPalindrome(s);
    return 0;
}