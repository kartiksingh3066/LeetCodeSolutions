#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int low = 0;
        int high = n - 1;

        while (low < high) {
            if (numbers[low] + numbers[high] < target) {
                low++;
            }
            else if (numbers[low] + numbers[high] > target) {
                high--;
            }
            else {
                break;
            }
        }

        return {low + 1, high + 1};
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    Solution sol;

    vector<int> ans = sol.twoSum(numbers, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}