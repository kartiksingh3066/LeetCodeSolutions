#include<iostream>
#include<string>

using namespace std;

bool isPallindrome(int i, string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return isPallindrome(i+1,s);
}

int main(){
    string s="MADAM";
    cout<<isPallindrome(0,s);
}