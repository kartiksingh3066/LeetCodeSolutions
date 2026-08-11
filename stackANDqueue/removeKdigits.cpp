#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<int>st;

        for(int i=0;i<n;i++){
            while(k>0){
                while(!st.empty() && st.top()>num[i]){
                    st.pop();
                    k--;
                }
            }
            st.push(nums[i]);
        }

        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};

int main(){
    
}