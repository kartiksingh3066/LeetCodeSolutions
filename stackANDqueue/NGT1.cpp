#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums) {
        map<int,int>ngt;
        stack<int>st;
        for(int i=nums.size()-1;i>=0;--i){
            int current=nums[i];
            while(!st.empty() && st.top()<=current){
                st.pop();
            }if(!st.empty()){
                ngt[current]=st.top();
            }else{
                ngt[current]=-1;
            }
            st.push(current);
        }
        vector<int>ans;
        for(int num:nums){
            ans.push_back(ngt[num]);
        }
        return ans;
    }
};

int main(){
    
}