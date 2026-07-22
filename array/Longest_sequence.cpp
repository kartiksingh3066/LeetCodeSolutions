#include<bits/stdc++.h>
using namespace std;

int longestSequence(vector<int>& nums){
    int n = nums.size();
    if(n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;

    // Insert elements into set
    for(int i = 0; i < n; i++){
        st.insert(nums[i]);
    }

    for(auto it : st){
        // Check if it is the starting element of sequence
        if(st.find(it - 1) == st.end()){
            int x = it;
            int cnt = 1;

            while(st.find(x + 1) != st.end()){
                x += 1;
                cnt += 1;
            }

            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main(){
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestSequence(nums);
}


