#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:

    int myAtoi(string s){
        int i=0;
        int n=s.size();
        int sign=1;

        while(i<n && s[i]==' '){
            i++;
        }

        if(i<n && (s[i]=='-' || s[i]=='+')){
            sign=(s[i]=='-')?-1:1;
            i++;
        }

        long long ans=0;

        while(i<n && isdigit(s[i])){
            int digit=s[i]-'0';

            ans=ans*10+digit;

            if (sign == 1 && ans > INT_MAX) return INT_MAX;
            if (sign == -1 && -ans < INT_MIN) return INT_MIN;

            i++;
        }
        return sign*ans;
    }
};

int main(){
    string s="42";
    Solution sol;
    cout<<sol.myAtoi(s);
    return 0;
}

