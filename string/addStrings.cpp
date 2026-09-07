#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        string result="";
        int k=0;
        while(i>=0 || j>=0){
           int total=(num1[i]-'0')+(num2[j]-'0')+k;
           k=total/10;
           result.push_back((total%10)+'0');
           i--;
           j--;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};