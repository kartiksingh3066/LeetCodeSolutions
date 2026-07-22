#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n == 0) return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for(int i = 1; i < n; i++) {
            if(ans.back()[1] >= intervals[i][0]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            } 
            else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    
    Solution sol;
    vector<vector<int>> ans = sol.merge(intervals);

    for(auto &it : ans){
        cout << it[0] << " " << it[1] << endl;
    }

    return 0;
}